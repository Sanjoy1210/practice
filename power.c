#include <stdio.h>

int power(int x, int y){
    if(y == 0) return 1;
    int result = x * power(x, y - 1);
    printf("X = %d, Y = %d, Result = %d\n", x, y, result);
    return result;
}

int main()
{
    printf("%d\n", power(10, 3));
    return 0;
}