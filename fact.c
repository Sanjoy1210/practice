#include <stdio.h>

int main()
{
    int t, i, n;
    long long int fact;
    scanf("%d", &t);

    while(t--){

        scanf("%d", &n);

        if(n == 0) fact = 1;

        fact = 1;
        for(i = 2; i <= n; i++){
            fact = fact * i;
        }

        printf("%lld\n", fact);
    }

    return 0;
}