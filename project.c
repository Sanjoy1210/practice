#include <stdio.h>


int main(void)
{
    int ara[5][5] = {{3, 4, 7, 10, 81}, {3, 9, 5, 6, 40}, {11, 55, 15, 12, 14}, {19, 17, 22, 55, 30}, {21, 66, 23, 99, 25}};
    int i, j, result = 0;

    for(i = 0; i < 4; i++){
        for(j = 3 - i; j >= 0; j--){
            result = result + ara[i][j];
        }
    }
    printf("%d\n", result);
    return 0;
}