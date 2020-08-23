#include <stdio.h>

void number(int n)
{
    if(n == 0) return;
    else
    {
        printf("%d\n", n);
        number(n - 1);        
    }
    
}

int main()
{
    number(10);
    return 0;
}