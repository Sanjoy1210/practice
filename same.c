#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 10; i++){
        if(i == 2 || i == 4 || i == 6 || i == 8) continue;

        else{
            for(j = 0; j <= i; j++){
                if(i == 0 && j == 0) continue;
                else if((i > 2 && i <= 9) && j == 1) printf("2 ");
                else if((i > 4 && i <= 9) && j == 2) printf("4 ");
                else if((i > 6 && i <= 9) && j == 3) printf("6 ");
                else if(i == 9 && j == 4) printf("8 ");
                else printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}