#include <stdio.h>
 
int main() 
{
    int octalNumber[10], number, i = 0, j;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d", &number);
    
    while(number != 0)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
        i++;
    }
    
    printf("\n Equivalent Octal Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
    return 0;
}