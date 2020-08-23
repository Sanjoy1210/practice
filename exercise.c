#include <stdio.h>

typedef struct {
    int x, y;
}Point;

int main()
{
    Point* p = malloc(sizeof(Point));
    p->x = 4;
    p->y = 5;

    printf("%d", p->x, p->y);

    return 0;
}
