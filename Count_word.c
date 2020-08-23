#include <stdio.h>
#include <string.h>

void word_in_separateLine(char word[])
{
    int i, j, len, is_word_started = 0;
    char word2[1002];

    len = strlen(word);

    for(i = 0, j = 0; i <= len; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            if(is_word_started == 0){
                is_word_started = 1;
                word2[j] = 'A' + (word[i] - 'a');
                j++;
            }
            else{
                word2[j] = word[i];
                j++;
            }
        }

        else if(word[i] >= 'A' && word[i] <= 'Z'){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            word2[j] = word[i];
            j++;
        }

        else if(word[i] >= '0' && word[i] <= '9'){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            word2[j] = word[i];
            j++;
        }

        else
        {
            if(is_word_started == 1){
                is_word_started = 0;
                word2[j] = '\0';
                printf("%s\n", word2);
                j = 0;
            }
        }
        
    }

    return;
}

int main()
{
    char word[1002];

    gets(word);
    word_in_separateLine(word);
    return 0;
}