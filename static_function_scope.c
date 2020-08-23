#include <stdio.h>

void func()
{
    int a = 10; // General integer variable
    static int s = 10; // Static integer variable

    a = a + 2;
    s = s + 2;

    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    func();
    func();
    func();

    return 0;
}