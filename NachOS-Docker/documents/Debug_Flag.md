# Debug Flag

In `NachOS/code/lib/debug.h` There is pre-defined debugging flags
- debug.h:20

```cpp
// The pre-defined debugging flags are:

const char dbgAll = '+';        // turn on all debug messages
const char dbgThread = 't';        // threads
const char dbgSynch = 's';        // locks, semaphores, condition vars
const char dbgInt = 'i';         // interrupt emulation
const char dbgMach = 'm';         // machine emulation (USER_PROGRAM)
const char dbgDisk = 'd';         // disk emulation (FILESYS)
const char dbgFile = 'f';         // file system (FILESYS)
const char dbgAddr = 'a';         // address spaces (USER_PROGRAM)
const char dbgNet = 'n';         // network emulation (NETWORK)
```

For example in `NachOS/code/threads/main.cc`
- main.cc:76

```cpp
DEBUG(dbgThread, "Entering main");
```

If you run either `./nachos -d +` or `./nachos -d t`, you will see the `Entering main` debug message displayed during the execution of NachOS.

```shell
NachOS/code$ ./userprog/nachos -d t
Entering main
Total threads number is 0
...(skipped)...
NachOS/code$ ./userprog/nachos -d +
Entering main
Scheduling interrupt handler the timer at time = 100
...(skipped)...
NachOS/code$
```