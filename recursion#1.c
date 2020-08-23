#include <stdio.h>

int fun(int m, int n)
{
    if(m > n) return 0;
    return m + fun(m + 1, n);
}

int main()
{
    int sum = fun(5, 10);

    printf("%d\n", sum);
    return 0;
}