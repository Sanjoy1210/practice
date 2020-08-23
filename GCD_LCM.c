#include <stdio.h>

int greatestCommonDivisor(int x, int y)
{
    int temp, result;

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
    int a, b, gcd;

    scanf("%d %d", &a, &b);

    gcd = greatestCommonDivisor(a, b);

    printf("GCD = %d\n", gcd);

    return 0;
}