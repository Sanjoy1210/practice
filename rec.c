#include <stdio.h>

int func(int x)
{
    if(x == 0) return 1;

    else{
        return func(x - 1) + 5;
    }
}

int main()
{
    printf("%d\n", func(3));
}