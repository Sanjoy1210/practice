#include <stdio.h>

int main()
{
    int ara[] = {10, 3, 9, 5, 4, 2, 8, 1, 6, 7, 11, 15, 13 , 12, 14};
    int len = sizeof(ara) / sizeof(ara[0]);
    int i, j, min, min_indx, ara2[len];

    for(i = 0; i < len; i++){
        min = 100;
        for(j = 0; j < len; j++){
            if(ara[j] < min){
                min = ara[j];
                min_indx = j;
            }
        }
        ara[min_indx] = 100;
        ara2[i] = min;
    }    

    for(i = 0; i < len; i++){
        printf("%d ", ara2[i]);
    }

    return 0;
}