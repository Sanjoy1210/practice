#include <stdio.h>

int main()
{
    int decimal, i, decimal2;
    int binary[10], octal[10];
    
    scanf("%d", &decimal);
    
    decimal2 = decimal;    
    
    //Decimal convert into Binary

    for(i = 0; decimal > 0; i++){
        binary[i] = decimal%2;    
        decimal = decimal/2;    
    }
    
    printf("Binary = ");
    
    for(i = i-1; i >= 0; i--){
        printf("%d", binary[i]);
    }
    
    printf(", ");
    
    //Decimal convert into Octal

    for(i = 0; decimal2 > 0; i++){
        octal[i] = decimal2 % 8;
        decimal2 = decimal2 / 8;
    }
    
    printf("Octal = ");
    
    for(i = i - 1; i >= 0; i--){
        printf("%d", octal[i]);
    }

    printf("\n");
    
    return 0;
}