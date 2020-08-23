#include <stdio.h>

int main()
{
    int A, B, x, y;
    scanf("%d %d", &A, &B);
    
    x = (A + B) / 2;
    y = (A - B) / 2;
    
    printf("X = %d, Y = %d\n", x, y);
    return 0;
}