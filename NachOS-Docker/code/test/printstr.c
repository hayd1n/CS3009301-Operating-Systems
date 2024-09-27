#include "syscall.h"

int main() {
    int len;
    len = Print("Hello NachOS2024!\n");
    PrintInt(len);
    len = Print("Have a nice day at school!\n");
    PrintInt(len);
    len = Print("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
    PrintInt(len);
    len = Print("abcdefghijklmnopqrstuvwxyz\n");
    PrintInt(len);
}