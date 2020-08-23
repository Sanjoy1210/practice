#include <stdio.h>

int main()
{
    int i, j;

    for(i = 2; i <= 10; i += 1){
        if(i == 3 || i == 5 || i == 8 || i == 9) continue;
        for(j = 1; j <= i; j++){
            if(j == 1 && (i == 4 || i == 6 || i == 7 || i == 10)) printf("2 ");
            else if((j == 5 || j == 6 && (i == 6 || i == 7))) printf("4 ");
            else if(j == 7 && (i == 7 || i == 10)) printf("5 ");
            else{
                if(j == 2 && (i == 4 || i == 6 || i == 7)) printf("2 ");
                else if(j == 3 || j == 4 && (i == 4 || i == 6 || i == 7)) printf("3 ");
                else if((j == 2 || j == 4 || j == 6 || j == 10) && (i == 10)) printf("5 ");
                else if((j == 8 || j == 9) && i == 10) printf("6 ");
                else printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}