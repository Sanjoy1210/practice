#include <stdio.h>
#include <stdbool.h>

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
        int l = 0, r = n - 1, m;
        bool ok = false;
        while(r >= l){
            m = (l + r) / 2;

            if(a[m] == x){
                ok = true;
                break;
            }
            else if(a[m] < x){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }

        if(ok){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
