#include <stdio.h>

int fahrenheit(int c)
{
    int f;

    f = (c * 1.8) + 32;
    return f;
}

int main()
{
    int cal, far;
    scanf("%d", &cal);

    far = fahrenheit(cal);

    if(far >= 135) printf("Your area is safe\n");
    else printf("You are in a danger zone");

    return 0;
}