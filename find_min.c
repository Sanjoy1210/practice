#include <stdio.h>

int find_min(int ara[], int n);

int main()
{
    int ara[] = {100, 20, 23, 0, 10, 3000, 2323, -29};
    int n = 8;
    int min = find_min(ara, n);

    printf("%d\n", min);

    return 0;
}

int find_min(int ara[], int n)
{
    int min = ara[0];
    int i;


    for(i = 0; i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
    }

    return min;
}
