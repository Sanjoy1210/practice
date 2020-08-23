#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len, count = 0;
    char str[10002];
    char ch;

    scanf("%[^\n]", str);
    scanf(" %s", ch);

    len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] != '\0') count++;
        else continue;
    }
    printf("%d\n", count);

    return 0;
}