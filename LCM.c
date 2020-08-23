#include <stdio.h>

int main()
{
    int a, b, x, gcd, lcm, multi;

    scanf("%d %d", &a, &b);

    multi = a * b;
    //printf("Multi = %d\n", multi);

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

    //printf("GCD is %d\n", gcd);

    lcm = multi / gcd;

    printf("LCM is %d\n", lcm);

    return 0;
}