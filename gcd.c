#include <stdio.h>

int gcd(int a, int b)
{
    printf("A = %d, B = %d, AB = %d\n", a, b, a % b);
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    gcd(468, 30);

    printf("%d\n", gcd(468, 30));

    return 0;
}