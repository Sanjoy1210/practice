#include <stdio.h>

int main()
{
    int i;

    for(i = 4; i <= 37; i++){
        if(i > 7 && i < 31) continue;
        else{
            if((i % 3 == 0 || i % 8 == 0) && (i % 11)) continue;

            else printf("%d ", i);
        }
        
    }
    printf("\n");
    return 0;
}