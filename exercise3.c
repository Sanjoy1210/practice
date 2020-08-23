#include <stdio.h>

#define x 10 + 5

int main()
{
    printf("x = %d\n", x);
    int a = x * x;
    printf("x = %d, a = %d\n", x, a);
    return 0;
}
