#include <stdio.h>

void findPair(int x[], int sum, int len)
{
    int i, j;

    for(i = 0; i < len; i++){
        for(j = i + 1; j < len; j++){
            if(x[i] + x[j] == sum){
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int length = sizeof(nums) / sizeof(nums[0]);

    findPair(nums, target, length);

    return 0;
}