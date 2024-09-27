#include "syscall.h"

int main() {
    int i;
    for ( i = 1; i <= 5; i++ ) {
        PrintInt(i);
        Sleep(1000000 * i);
    }
}