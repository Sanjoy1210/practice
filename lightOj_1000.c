#include <stdio.h>

int main()
{
    int a, b, t, ans, i;
    
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        ans = a + b;
        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}