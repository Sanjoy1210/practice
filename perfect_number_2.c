#include <stdio.h>
#include <math.h>

int main()
{
    int t, i, n, num, sqrt_num, sum;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for(num = 1; num <= n; num++){

            sum = 1;

            sqrt_num = sqrt(num);

            if(sqrt_num < 2) continue;

            for(i = 2; i <= sqrt_num; i++){
                if(num % i == 0){
                    sum = sum + i + num / i;
                }
            }

            if(sum == num){
                printf("%d\n", num);
            }
        }
    }

    return 0;
}