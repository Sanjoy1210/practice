#include <stdio.h>

int main()
{
    int x = 50;
    int *p;

    printf("Value of x: %d\n", x);

    p = &x;
    *p = 90;

    printf("Vaue of x: %d\n", x);

    x = 60;

    printf("Value of x: %d\n", x);
    printf("Value stored at location %p is %d\n", p, *p);

    printf("Address of x: %p\n", &x);

    printf("Value of p: %p\n", p);

    return 0;
}