#include <stdio.h>

void perfect_number()
{
    int x, i, result = 0;

    for(i = 1; i < x; i++){
        if(x % i == 0) result += i;
    }
}

int main()
{
    int t, num, i;

    perfect_number();

    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);

        if(perfect_number == num) printf("YES, %d is a perfect number\n", num);
        else printf("NO, %d is not a perfect number\n", num);
    }

    return 0;
}