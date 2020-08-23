#include <stdio.h>

// Small Number to Big Number

void binary_search_small_big(int ara[], int num)
{
    int low_indx, high_indx, mid_indx;

    low_indx = 0, high_indx = 10 - 1;

    while(low_indx <= high_indx){
        mid_indx = (low_indx + high_indx) / 2;

        if(num == ara[mid_indx]){
            printf("%d is in the array, It is the %d th element of the array\n", ara[mid_indx], mid_indx);
            break;
        }

        else if(num < mid_indx) high_indx = mid_indx - 1;

        else low_indx = mid_indx + 1;
    }

    if(low_indx > high_indx) printf("%d is not in the array\n", num);

    return;
}

// Big Number to Small Number

void binary_search_big_small(int ara[], int num)
{
    int high = 0, low = 10 - 1, mid;

    while(high <= low){

        mid = (low + high) / 2;

        if(num == ara[mid]){
            printf("%d is in the array, It is the %d th element of the array\n", ara[mid], mid);
            break;
        }

        else if(num > ara[mid]) low = mid - 1;

        else high = mid + 1;
    }

    if(high > low) printf("%d is not in the array\n", num);

    return;
}

int main()
{
    int ara[10], num, i;

    // Initialize the array from user
    for(i = 0; i < 10; i++){
        scanf("%d", &ara[i]);
    }

    scanf("%d", &num);

    // Small to Big Number
    if(ara[0] < ara[9]) binary_search_small_big(ara, num);

    // Big to Small NUmber
    else binary_search_big_small(ara, num);

    return 0;
}