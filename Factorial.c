#include <stdio.h>

// Creat max array which can hold big result of factorial
#define MAX 500
int result[MAX];

// digit count in result array
int result_size;

void multiply(int x){
    // in multiply method multiply this "x" number to result[] and update the result in reverse order

    int carry = 0;
    for(int i = 0; i < result_size; i++){
        int prod = result[i] * x + carry;
        result[i] = prod % 10; // to store reverse order
        carry = prod / 10;
    }

    while(carry){
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
}

void factorial(int n){
    // initialize result[0] = 1 and digit of number = 1
    result[0] = 1;
    result_size = 1;

    // now multiply digit one by one
    for(int x = 2; x <= n; x++){
        multiply(x);
    }

    // print the result array in reverse order for answer
    for(int i = result_size - 1; i >= 0; i--){
        printf("%d", result[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    factorial(n);
    return 0;
}