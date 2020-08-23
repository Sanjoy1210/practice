#include <stdio.h>
#include <math.h>

int squareRoot(int x)
{
    int y = sqrt(x);
    return y;
}

int main()
{
    int i, n, m, t;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        m = squareRoot(n);
        if(m * m == n) printf("YES\n");
        else
        {
            printf("NO\n");
        }        
    }
    return 0;
}