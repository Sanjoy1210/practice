#include <stdio.h>

void f(int n)
{
    if(n == 8) return;
    ++n;
    printf("%d\n", n);
    f(n);
    printf("%d\n", n);
}

int main()
{
    f(4);

    return 0;
}
