#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[100000];
    char *p, *e;
    long input;
    int count, t;

    scanf("%d", &t);

    while(t--){

        scanf(" %[^\n]", line);

        p = line;
        count = 0;
        
        for(p = line; ; p = e){
            input = strtol(p, &e, 10);
            if(p == e) break;
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}