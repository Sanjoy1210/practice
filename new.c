#include <stdio.h>

int main()
{
    int i;

    for(i = 15; i <= 51; i++){
        if(i > 15 && i < 35) continue;
        if(i % 6 == 0 || i % 20 == 0 || i % 23 == 0) continue;
        printf("%d ", i);
    }
    return 0;
}