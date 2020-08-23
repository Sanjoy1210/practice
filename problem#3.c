#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5, j = 1; i <= 32; i++, j++){
        printf("%d ", i);
        printf("%d ", i * 1);
    }
    return 0;
}
