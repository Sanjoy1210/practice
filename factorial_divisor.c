#include <stdio.h>

int main()
{
    int n, i, j, count;
    scanf("%d", &n);
    int prime[] = {2, 3, 5, 7};

    for(i = 0; i < 4; i++){
        count = 0;
        for(j = n; j > 0; j--){
            while(j % prime[i] == 0){
                count++;
                j = j / prime[i];
            }
        }
        printf("(%d, %d)", prime[i], count);
    }

    return 0;
}