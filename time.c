#include <stdio.h>

int main()
{
    int n, hour = 0, min = 0, sec;
    scanf("%d", &n);

    if(n >= 0 && n < 60){
        sec = n;
        printf("%d:%d:%d\n", hour, min, sec);
    }
    else if(n >= 60 && n < 3600){
        min = n / 60;
        sec = n - (min * 60);
        printf("%d:%d:%d\n", hour, min, sec);
    }
    else
    {
        hour = n / 3600;
        min = (n - (3600 * hour)) / 60;
        sec = (n - (3600 * hour) - (min * 60));
        printf("%d:%d:%d\n", hour, min, sec);
    }
    
    return 0;
}