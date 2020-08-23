#include <stdio.h>

void number(int end, int n)
{
    if(end > 32) return;

    for (int i = 5; i <= end; i = i + n)
    {
        printf("%d ", i);
    }

    number(end + 6, n + 2);    
}

int main()
{
    number(8, 1);
    return 0;
}