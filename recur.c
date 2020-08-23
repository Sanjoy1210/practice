#include <stdio.h>

int number(int start, int n)
{
    if(n < -4) return 0;

    for(int i = start; i > 4; i = i - (n+4)){
        printf("%d ", i);
    }

    number(start - 6, n - 2);
}

int main()
{
    number(32, 5);
    return 0;
}