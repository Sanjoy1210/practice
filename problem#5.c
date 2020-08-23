#include <stdio.h>

int main()
{
    int i, j = 11;

    for(i = 1; i <= 3; i = i + 1){
        while(j >= -14){
            printf("%d ", j);
            j = j - 5;
        }
        j = 16;
    }
    printf("%d\n", j);
    return 0;
}