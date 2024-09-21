# Adding User Program

To add your program to NachOS, follow these steps:

1. Place your source code in the `NachOS/code/test` directory.
2. Add a line in the `NachOS/code/test/Makefile` file to specify your program for compilation.

To illustrate the process of adding, for example, `test1` to NachOS, follow these steps:

1. Place `test1.c` source file into `NachOS/code/test/` directory 
2. Modify the `NachOS/code/test/Makefile` file to add a `test1` make target, as shown below:
  - Makefile:67
  
  ```makefile
  test1: test1.o start.o
      $(LD) $(LDFLAGS) start.o test1.o -o test1.coff
      ../bin/coff2noff test1.coff test1
  ```
  
3. Ensure that you add the `test1` make target at the end of the `all` make target, as shown below:
  - Makefile:36
  
  ```makefile
  all: halt shell matmult sort test1
  ```
  
This process will allow you to include and build `test1` in NachOS.