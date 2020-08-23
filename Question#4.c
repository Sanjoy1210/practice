#include <stdio.h>

int main()
{
    int sum = 0;
    long int num, rem;
    
    scanf("%ld", &num);
    
    while(num != 0){
        rem = num % 10;
        printf("Reminder = %ld ", rem);
        
        if(rem == 2){
            sum = sum + rem;
        }
        
        else if((rem % 2) != 0){
            if(rem == 3 || rem == 5 || rem == 7){
                sum = sum + rem;
            }
        }
        
        num = num / 10;
        printf("Number = %ld\n", num);
    }
    
    printf("Total = %d\n", sum);

    return 0;
}
