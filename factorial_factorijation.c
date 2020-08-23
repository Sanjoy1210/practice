#include <stdio.h>

int main()
{
    int n, i, j, count;
    scanf("%d", &n);
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19};

    for(i = 0; prime[i] <= n; i++){
        count = 0;
        j = n;
        while(j > 0){
            count += (j / prime[i]);
            j = j / prime[i];
        }
        printf("(%d, %d)", prime[i], count);
    }

    return 0;
}