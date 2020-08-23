#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            if(i == 1 || i == 9) printf("* ");
            else if((i == 2 || i == 8) && (j > 2 && j < 8)) printf(". ");
            else if((i > 2 && i < 8) && (j == 2 || j == 8)) printf(". ");
            else if((i == 4 || i == 6) && j == 5) printf(". ");
            else if(i == 5 && (j == 4 || j == 6)) printf(". ");
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}