#include <stdio.h>
#include <stdlib.h>

int travers(int ara[], int lastindex)
{
    if(lastindex < 0) return 0;
    return ara[lastindex] + travers(ara, lastindex - 1);
}

int main()
{
    int ara[] = {5, 3, 8, 9, 0, 5, 19};
    int len = sizeof(ara) / sizeof(ara[0]);
    travers(ara, len - 1);
    printf("%d\n", travers(ara, len - 1));
    return 0;
}