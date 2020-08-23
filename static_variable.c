#include <stdio.h>

int a; //Global variable (automatic value in 0)
static int b; //Static variable (Global scope) (automatic value in 0)

void func()
{
    a = a + 1; // a = 0 + 1 = 1
    b = b + 1; // b = 0 + 1 = 1
}

int main()
{
    func();
    printf("a = %d\n", a); // a = 1
    printf("b = %d\n", b); // b = 1

    return 0;
}