#include <stdio.h>

int main()
{
    int a[2][3] = {2, 3, 4, 5, 6, 7};
    printf("%d", (*(*(a + 1))));

    return 0;
}
