// exception.cc
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation
// of liability and disclaimer of warranty provisions.

#include <iostream>
#include "copyright.h"
#include "main.h"
#include "syscall.h"

#define STUDENT_ID 11030202
#define PRINT_REPLACE_CHAR_1 'C'
#define PRINT_REPLACE_CHAR_2 'c'

//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2.
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions
//	are in machine.h.
//----------------------------------------------------------------------

void ExceptionHandler(ExceptionType which) {
    int type = kernel->machine->ReadRegister(2);
    int val;

    switch ( which ) {
    case SyscallException:
        switch ( type ) {
        case SC_Halt:
            DEBUG(dbgAddr, "Shutdown, initiated by user program.\n");
            kernel->interrupt->Halt();
            break;
        case SC_PrintInt:
            val = kernel->machine->ReadRegister(4);
            cout << "Print integer:" << val << endl;
            return;
        /*		case SC_Exec:
                    DEBUG(dbgAddr, "Exec\n");
                    val = kernel->machine->ReadRegister(4);
                    kernel->StringCopy(tmpStr, retVal, 1024);
                    cout << "Exec: " << val << endl;
                    val = kernel->Exec(val);
                    kernel->machine->WriteRegister(2, val);
                    return;
        */
        case SC_Sleep:
            val = kernel->machine->ReadRegister(4);
            cout << "Sleep Time: " << val << "(ms)" << endl;
            kernel->alarm->WaitUntil(val);
            return;
        case SC_Exit:
            DEBUG(dbgAddr, "Program exit\n");
            val = kernel->machine->ReadRegister(4);
            cout << "return value:" << val << endl;
            kernel->currentThread->Finish();
            break;
        case SC_Add: {
            int op1 = kernel->machine->ReadRegister(4);
            int op2 = kernel->machine->ReadRegister(5);
            int result = op1 + op2;
            kernel->machine->WriteRegister(2, result);
            return;
        }
        case SC_Sub: {
            int op1 = kernel->machine->ReadRegister(4);
            int op2 = kernel->machine->ReadRegister(5);
            int result = op1 - op2;
            kernel->machine->WriteRegister(2, result);
            return;
        }
        case SC_Mul: {
            int op1 = kernel->machine->ReadRegister(4);
            int op2 = kernel->machine->ReadRegister(5);
            int result = op1 * op2;
            kernel->machine->WriteRegister(2, result);
            return;
        }
        case SC_Div: {
            int op1 = kernel->machine->ReadRegister(4);
            int op2 = kernel->machine->ReadRegister(5);
            if ( op2 == 0 ) {
                cerr << "Error: Divide by zero" << endl;
                kernel->machine->WriteRegister(2, STUDENT_ID);
            } else {
                int result = op1 / op2;
                kernel->machine->WriteRegister(2, result);
            }
            return;
        }
        case SC_Mod: {
            int op1 = kernel->machine->ReadRegister(4);
            int op2 = kernel->machine->ReadRegister(5);
            if ( op2 == 0 ) {
                cerr << "Error: Divide by zero" << endl;
                kernel->machine->WriteRegister(2, STUDENT_ID);
            } else {
                int result = op1 % op2;
                kernel->machine->WriteRegister(2, result);
            }
            return;
        }
        case SC_Print: {
            /*
             * Because my student ID is B11030202, I will print the string start with
             * `[B11030202_Print]` and due to the last two characters of my student ID is `02`,
             * 02 % 26 = 2, so I will replace `C` and `c` with `*`.
             * | 0    | 1    | 2    | 3    | 4    | 5    | 6    | 7    | ...  | 25   |
             * | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
             * | A    | B    | C    | D    | E    | F    | G    | H    | ...  | Z    |
             * | a    | b    | c    | d    | e    | f    | g    | h    | ...  | z    |
             */
            cout << "[B11030202_Print]";
            val = 0;
            for ( int addr = kernel->machine->ReadRegister(4);; addr++ ) {
                int v;
                bool success = kernel->machine->ReadMem(addr, 1, &v);
                if ( !success ) {
                    cerr << "Error: ReadMem failed" << endl;
                    break;
                }

                char c = (char)v;
                // Break if the character is '\0'
                if ( c == '\0' ) {
                    break;
                }

                // Replace the character
                if ( c == PRINT_REPLACE_CHAR_1 || c == PRINT_REPLACE_CHAR_2 ) {
                    cout << "*";
                } else {
                    cout << c;
                }

                // Count the number of characters only which have been printed
                val++;
            }

            // Return the number of characters printed
            kernel->machine->WriteRegister(2, val);

            return;
        }
        default:
            cerr << "Unexpected system call " << type << "\n";
            break;
        }
        break;
    default:
        cerr << "Unexpected user mode exception" << which << "\n";
        break;
    }
    ASSERTNOTREACHED();
}
