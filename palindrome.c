#include <stdio.h>
#include <string.h>

int main()
{
    char word[20], reverse[20];
    int i, j, length;

    scanf("%s", word);
    length = strlen(word);

    for(i = 0, j = length - 1; i < length; i++, j--){
        reverse[i] = word[j];
    }

    reverse[i] = '\0';
    //printf("%s\n", reverse);

    if(0 == strcmp(word, reverse)){
        printf("%s is a palindrome.\n", word);
    }
    else
    {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}