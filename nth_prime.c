#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, j, count = 0;
    scanf("%d", &num);
    int ara[num];
    
    for(i = 2; i < num; i++){
        ara[i] = i;
    }

    int root = sqrt(num);

    for(i = 2; i <= root; i++){
        for(j = 2; i * j < num; j++){
            ara[i * j] = 0;
        }
    }

    for(i = 2; i < num; i++){
        if(ara[i] != 0) count++;
    }
    
    printf("%d\n", count);

    for(i = 2; i < num; i++){
        if(ara[i] == 0) continue;
        printf("%d ", ara[i]);
    }

    printf("\n");
    
    return 0;
}