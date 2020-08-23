#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 20; j++){
            if((i == 2 && (j > 2 && j < 19)) || (i == 3 && (j > 3 && j < 18)) || (i == 4 && (j > 4 && j < 17)) || (i == 5 && (j > 5 && j < 16)) || (i == 6 && (j > 6 && j < 15)) || (i == 7 && (j > 7 && j < 14)) || (i == 8 && (j > 8 && j < 13)) || (i == 9 && (j > 9 && j < 12))) printf("  ");
            else printf("c ");
        }
        printf("\n");
    }
    return 0;
}