#include <stdio.h>

int main()
{
    int ara1[] = {10, 3, 9, 5, 4, 2, 8, 1, 6, 7, 11, 15, 13 , 12, 14};
    int len = sizeof(ara1) / sizeof(ara1[0]);
    int ara2[len];
    int i, j, min, min_indx;

    for(i = 0; i < len; i++){
        min = 100;
        for(j = 0; j < len; j++){
            if(ara1[j] < min){
                min = ara1[j];
                min_indx = j;
            }
        }
        ara1[min_indx] = 100;
        ara2[i] = min;
    }

    for(i = 0; i < len; i++){
        printf("%d ", ara2[i]);
    }

    return 0;
}