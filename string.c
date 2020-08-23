#include <stdio.h>
#include <string.h>

int main()
{
    char str[1002], word[1002];
    int len, i, j, is_word_started = 0;

    scanf("%[^\n]", str);

    len = strlen(str);

    for(i = 0, j = 0; i <= len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(is_word_started == 0){
                is_word_started = 1;
                word[j] = 'A' + (str[i] - 'a');
                j++;
            }

            else
            {
                word[j] = str[i];
                j++;
            }            
        }

        else if(str[i] >= 'A' && str[i] <= 'Z'){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            word[j] = str[i];
            j++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            if(is_word_started == 0){
                is_word_started = 1;
            }
            word[j] = str[i];
            j++;
        }

        else{
            if(is_word_started == 1){
                is_word_started = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }
    }

    return 0;
}