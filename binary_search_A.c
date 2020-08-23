#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < k; i++){
        int x;
        scanf("%d", &x);

        int l = -1;//a[l] < x
        int r = n; // a[r] >= x

        while(r > l + 1){
            int m = (l + r) / 2;
            if(a[m] < x){
                l = m;
            }
            else{
                r = m;
            }
        }

        if(r < n && a[r] == x){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
