#include <stdio.h>

int main()
{
    int a, b, x, gcd;

    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d ", a, b);

    if(a == 0) gcd = b;
    else if(b == 0) gcd = a;
    else{
        while(b != 0){
            x = b;
            b = a % b;
            a = x;
        }
        gcd = a;
    }

    printf("= %d\n", gcd);

    return 0;
}