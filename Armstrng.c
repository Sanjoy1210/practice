#include <stdio.h>
#include <math.h>

int main()
{
    int num, last_num, second_num, second, first_num;
    int t, sum;

    scanf("%d", &t);

    while(t--){

        scanf("%d", &num);

        first_num = num / 100;
        second = num % 100;
        second_num = second / 10;
        last_num = second % 10;

        sum = pow(first_num, 3) + pow( second_num, 3) + pow(last_num, 3);

        if(num == sum) printf("%d is an armstrong number!\n", num);
        else printf("%d is not an armstrong number!\n", num);
    }

    return 0;
}