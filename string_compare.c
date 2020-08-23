#include <stdio.h>

int string_compare(char a[], char b[])
{
    int i;

    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i] > b[i]) return 1;
        else if(a[i] < b[i]) return -1;
        else return 0;
    }
}

int main()
{
    char a[20], b[20];

    scanf("%s %s", a, b);
    int compare = string_compare(a, b);

    if(compare == 1) printf("Sting a is greater than string b\n");
    if(compare == -1) printf("string a is less than string b\n");
    if(compare == 0) printf("String a is equal to string b\n");

    return 0;
}