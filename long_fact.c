#include <stdio.h>
long factorial(int);

int main()
{
  int n;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  printf("%d! = %ld\n", n, factorial(n));

  return 0;
}

long factorial(int n)
{
  int i;
  long fact = 1;

  for (i = 2; i <= n; i++)
    fact = fact * i;

  return fact;
}