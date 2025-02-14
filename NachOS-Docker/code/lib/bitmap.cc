// bitmap.cc
//	Routines to manage a bitmap -- an array of bits each of which
//	can be either on or off.  Represented as an array of integers.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "debug.h"
#include "bitmap.h"

//----------------------------------------------------------------------
// BitMap::BitMap
// 	Initialize a bitmap with "numItems" bits, so that every bit is clear.
//	it can be added somewhere on a list.
//
//	"numItems" is the number of bits in the bitmap.
//----------------------------------------------------------------------

BitMap::BitMap(int numItems) {
    int i;

    ASSERT(numItems > 0);

    numBits = numItems;
    numWords = divRoundUp(numBits, BitsInWord);
    map = new unsigned int[numWords];
    for ( i = 0; i < numWords; i++ ) {
        map[i] = 0;  // initialize map to keep Purify happy
    }
    for ( i = 0; i < numBits; i++ ) {
        Clear(i);
    }
}

//----------------------------------------------------------------------
// BitMap::~BitMap
// 	De-allocate a bitmap.
//----------------------------------------------------------------------

BitMap::~BitMap() { delete map; }

//----------------------------------------------------------------------
// BitMap::Set
// 	Set the "nth" bit in a bitmap.
//
//	"which" is the number of the bit to be set.
//----------------------------------------------------------------------

void BitMap::Mark(int which) {
    ASSERT(which >= 0 && which < numBits);

    map[which / BitsInWord] |= 1 << (which % BitsInWord);

    ASSERT(Test(which));
}

//----------------------------------------------------------------------
// BitMap::Clear
// 	Clear the "nth" bit in a bitmap.
//
//	"which" is the number of the bit to be cleared.
//----------------------------------------------------------------------

void BitMap::Clear(int which) {
    ASSERT(which >= 0 && which < numBits);

    map[which / BitsInWord] &= ~(1 << (which % BitsInWord));

    ASSERT(!Test(which));
}

//----------------------------------------------------------------------
// BitMap::Test
// 	Return TRUE if the "nth" bit is set.
//
//	"which" is the number of the bit to be tested.
//----------------------------------------------------------------------

bool BitMap::Test(int which) const {
    ASSERT(which >= 0 && which < numBits);

    if ( map[which / BitsInWord] & (1 << (which % BitsInWord)) ) {
        return TRUE;
    } else {
        return FALSE;
    }
}

//----------------------------------------------------------------------
// BitMap::FindAndSet
// 	Return the number of the first bit which is clear.
//	As a side effect, set the bit (mark it as in use).
//	(In other words, find and allocate a bit.)
//
//	If no bits are clear, return -1.
//----------------------------------------------------------------------

int BitMap::FindAndSet() {
    for ( int i = 0; i < numBits; i++ ) {
        if ( !Test(i) ) {
            Mark(i);
            return i;
        }
    }
    return -1;
}

//----------------------------------------------------------------------
// BitMap::NumClear
// 	Return the number of clear bits in the bitmap.
//	(In other words, how many bits are unallocated?)
//----------------------------------------------------------------------

int BitMap::NumClear() const {
    int count = 0;

    for ( int i = 0; i < numBits; i++ ) {
        if ( !Test(i) ) {
            count++;
        }
    }
    return count;
}

//----------------------------------------------------------------------
// BitMap::Print
// 	Print the contents of the bitmap, for debugging.
//
//	Could be done in a number of ways, but we just print the #'s of
//	all the bits that are set in the bitmap.
//----------------------------------------------------------------------

void BitMap::Print() const {
    cout << "BitMap set:\n";
    for ( int i = 0; i < numBits; i++ ) {
        if ( Test(i) ) {
            cout << i << ", ";
        }
    }
    cout << "\n";
}

//----------------------------------------------------------------------
// BitMap::SelfTest
// 	Test whether this module is working.
//----------------------------------------------------------------------

void BitMap::SelfTest() {
    int i;

    ASSERT(numBits >= BitsInWord);  // bitmap must be big enough

    ASSERT(NumClear() == numBits);  // bitmap must be empty
    ASSERT(FindAndSet() == 0);
    Mark(31);
    ASSERT(Test(0) && Test(31));

    ASSERT(FindAndSet() == 1);
    Clear(0);
    Clear(1);
    Clear(31);

    for ( i = 0; i < numBits; i++ ) {
        Mark(i);
    }
    ASSERT(FindAndSet() == -1);  // bitmap should be full!
    for ( i = 0; i < numBits; i++ ) {
        Clear(i);
    }
}
