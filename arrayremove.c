#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ara[] = {1, 2, 4}, element, found = 0, position;

    for(int i = 0; i < 3; i++) {
        
        element = abs(ara[i] - ara[2]);
        break;
    }
    for(int i = 0; i < 3; i++) {
        if(ara[i] == element) {
            found += 1;
            position = i;
            break;
        }
    }

    if(found == 1) {
        for(int i = position; i < 3 - 1; i++) {
            ara[i] = ara[i + 1];
        }
    }

    for(int i = 0; i < 2; i++) {
        printf("%d ", ara[i]);
    }

    return 0;
}