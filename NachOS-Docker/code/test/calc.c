#include "syscall.h"

int main() {
    int op1, op2;
    int a, b, c, d, e, div0;
    op1 = 2024;
    op2 = 113;
    a = Add(op1, op2);
    b = Sub(op1, op2);
    c = Mul(op1, op2);
    d = Div(op1, op2);
    e = Mod(op1, op2);
    PrintInt(a);
    PrintInt(b);
    PrintInt(c);
    PrintInt(d);
    PrintInt(e);
    div0 = Div(1, 0);
    PrintInt(div0);
}