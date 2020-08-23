#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            printf(" ");
        }
        for(k = 1; k <= i; k++){
            if((i == 3 && k == 2) || (i == 4 && (k == 2 || k == 3)) || (i == 5 && (k == 2 || k == 3 || k == 4))){
                printf("  ");
            }
            else printf("* ");
        }
        printf("\n");
    }
    return 0;
}