#include <stdio.h>

int mian()
{
    int i, j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
