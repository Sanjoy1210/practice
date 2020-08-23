#include <stdio.h>

int greatestCommonDivisor(int x, int y)
{
    int result, temp;

    if(x == 0) result = y;
    else if(y == 0) result = x;
    else{
        while(y != 0){
            temp = y;
            y = x % y;
            x = temp;
        }
        result = x;
    }

    return result;
}

int main()
{
    int t, a, b, gcd, lcm;
    long long int multi;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &a, &b);

        multi = (long long) a * b;
        gcd = greatestCommonDivisor(a, b);
        lcm = multi / gcd;

        printf("LCM = %d\n", lcm);
    }

    return 0;
}