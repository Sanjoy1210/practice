#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, t;

    scanf("%d", &n);

    for(i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            t = n / i;
            printf("%d %d ", i, t);
        }        
    }

    return 0;
}