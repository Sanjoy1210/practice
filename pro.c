#include <stdio.h>

int number(int n)
{
    if(n == 0) return 0;

    printf("Number = %d\n", n);
    int m = n % 10;
    int sum = number(n / 10);
    int result = m + sum;
    printf("Number = %d, Reminder = %d, Sum = %d, Result = %d\n", n, m, sum, result);
    return result;
}

int main()
{
    number(16537);
    printf("%d\n", number(16537));
    return 0;
}