#include <stdio.h>

void binary_search(int ara[], int num)
{
    int low = 0, high = 8, mid;

    while(low <= high){
        mid = (low + high) / 2;

        if(num == ara[mid]){
            printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid], mid);
            break;
        }
        else if(num < mid){
            high = mid - 1;
        }
        else low = mid + 1;
    }

    if(low > high) printf("%d is not in the array\n", num);

    return;
}

int main()
{
    int ara[] = {1, 2, 4, 6, 8, 13, 15, 23, 25};
    int num = 5;

    binary_search(ara, num);

    return 0;
}