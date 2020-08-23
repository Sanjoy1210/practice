#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, length, count;
    char user[100];
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        count = 0;
        scanf(" %[^\n]", user);
        length = strlen(user);

        for(j = 0; j < length; j++){
            if(user[j] == ' '){
                while(user[j] == ' ') j++;
                count++;
            }
        }
        printf("count is %d\n",count + 1);
    }
    return 0;
}