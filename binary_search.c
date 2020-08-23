#include <stdio.h>

// This Binary Search will work for small to Big numbers

void binary_search(int ara[], int num)
{
    int low_indx, mid_indx, high_indx;
    low_indx = 0;
    high_indx = 10 - 1;

    while(low_indx <= high_indx)
    {
        mid_indx = (low_indx + high_indx) / 2;

        if(num == ara[mid_indx]){
            printf("%d is in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
            break;
        }

        else if(num < mid_indx) high_indx = mid_indx - 1;

        else low_indx = mid_indx + 1;
    }

    if(low_indx > high_indx) printf("%d is not in the array.\n", num);

    return;
}

int main()
{
    int ara[10];
    int num, i;

    // Enter from small to big numbers
    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }

    scanf("%d", &num);

    binary_search(ara, num);

    return 0;
}