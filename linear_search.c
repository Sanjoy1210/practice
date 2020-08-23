#include <stdio.h>

int main()
{
    int t, n1, n2, n3, temp;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &n1, &n2, &n3);

        printf("Case %d: ", i);
        if(n1 > n2){
            temp = n2;
            n2 = n1;
            n1 = temp;
        }

        if(n1 > n3){
            temp = n3;
            n3 = n1;
            n1 = temp;
        }

        if(n2 > n3){
            temp = n3;
            n3 = n2;
            n2 = temp;
        }

        printf("%d %d %d\n", n1, n2, n3);
    }

    return 0;
}
