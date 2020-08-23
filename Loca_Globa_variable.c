#include <stdio.h>

int x = 1;

void myfunc(int y)
{
    y = y * 2;
    x = x + 10;

    printf("myfuc, X = %d, Y = %d\n", x, y);
}

int main()
{
    int y = 5;
    x = 10;

    myfunc(y);

    printf("X = %d, Y = %d\n", x, y);

    return 0;
}