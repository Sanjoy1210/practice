#include <stdio.h>
#include <string.h>

int main()
{
    char word[30], temp;
    int i, j;

    scanf("%s", word);
    float len = strlen(word);

    for(i = 0, j = len - 1; i < len/2; i++, j--){
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }
    
    if(word[i] == word[j]) printf("%s is a palindrome\n", word);
    else
    {
        printf("%s is not a palindrome\n", word);
    }
    
    
    return 0;
}