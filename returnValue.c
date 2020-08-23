#include <stdio.h>

int add(int a, int b)
{
    a += b;
    //return a;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("%d\n", add(a, b));
    printf("%d\n", a);

    return 0;
}
