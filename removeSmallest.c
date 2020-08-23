#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, count1 = 0, count2 = 0;
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }

        for(int i = 1; i < n; i++) {
            for(int j = n - 1; j >= 0; j++) {
                if(abs(ara[i] - ara[j] <= 1)){
                    ara[i] = 0;
                    count1++;
                }
                else if(a)
            }
        }
    }
}