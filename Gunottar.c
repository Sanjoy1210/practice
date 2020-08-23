#include <stdio.h>
#include <math.h>

int main()
{
    int n, t, x, k;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &x, &k);
        
        int sum = 0;

        for(n = 0; n <= k; n++){
            sum += round(pow(x, n));
        }

        printf("Result = %d\n", sum);
    }
    return 0;
}