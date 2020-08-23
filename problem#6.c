#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 8; i++){
        if(i == 2 || i == 4 || i == 6) continue;
        for(j = 1; j <= i; j++){
            if(i == 3) printf("2 ");
            else if((i == 5 || i == 8) && j == 1) printf("1 ");
            
            else{
                if(i == 5 && (j == 2 || j == 3)) printf("2 ");
                else if(i == 5 && (j == 4 || j == 5)) printf("3 ");
                else if(i == 7 && (j == 1 || j == 3 || (j > 4 && j < 8))) printf("4 ");
                else if(i == 7 && j == 2) printf("2 ");
                else if(i == 7 && j == 4) printf("3 ");
                else if(i == 8 && (j == 2 || j == 3)) printf("2 ");
                else if(i == 8 && (j == 4 || j == 5)) printf("3 ");
                else if(i == 8 && (j == 6 || j == 7)) printf("4 ");
                else if(i == 8 && j == 8) printf("5 ");
                else printf("1 ");
            }
            
        }
        printf("\n");
    }
}