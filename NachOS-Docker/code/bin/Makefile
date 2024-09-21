# Use normal make for this Makefile
#
# Makefile for:
#	coff2noff -- converts a normal MIPS executable into a Nachos executable
#	disasm -- disassembles a normal MIPS executable 
#			(only works for little endian machines)
#
# Copyright (c) 1992-1996 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

include ../Makefile.dep
UNAME_P := $(shell uname -p)
ifeq ($(UNAME_P),x86_64)		# Host is X86_64
	CC=gcc
	CFLAGS=-I../lib -I../threads $(HOST) -m32
	LD=gcc -m32
else ifneq ($(filter %86,$(UNAME_P)),)	# Host is i386
	CC=gcc
	CFLAGS=-I../lib -I../threads $(HOST)
	LD=gcc
else
        $(error $(UNAME_P) currently unsupported!)
endif

all: coff2noff 
#$(DISASM)

# converts a COFF file to Nachos object format
coff2noff: coff2noff.o
	$(LD) coff2noff.o -o coff2noff

# dis-assembles a COFF file
#disasm: out.o opstrings.o
#	$(LD) out.o opstrings.o -o disasm
