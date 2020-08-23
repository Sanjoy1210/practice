#include <stdio.h>

int main()
{
    int n, x, sum, one, two, three, four, taxi, count, count2;
    scanf("%d", &n);

    sum = one = two = three = four = count = count = 0;
    
    for(int i = 1; i <= n; i++) {
        scanf("%d", &x);

        switch (x){
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            default:
                four++;
                break;
        }
    }

    taxi = four;

    if(one || three) {
        count++;
        one = 0;
        three = 0;
    }

    if(two) {
        two *= 2;
        if(two % 4 == 0){
            count2++;
        }
        else count2 = (two / 4) + 1;
    }

    sum = taxi + count + count2 + 1;

    printf("%d\n", sum);

    return 0;
}