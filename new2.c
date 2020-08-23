#include <stdio.h>

int main(void)
{
    int i;

    for(i = -7; i <= 26; i++){
        if(i > -4 && i < 20) continue;
        if((i % 5 == 0 && i % 4) || i % 21 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}