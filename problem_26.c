#include <stdio.h>

int main()
{
    int t, days;
    float x;

    scanf("%d", &t);

    while(t--){
        scanf("%f", &x);

        days = 0;

        while(x > 1.0){
            x = x / 2;
            days++;
        }

        printf("%d days\n", days);
    }

    return 0;
}