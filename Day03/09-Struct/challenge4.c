#include <stdio.h>

typedef struct
{
    int x;
    int y;

} Point;

int main()
{    
    Point p;
    Point *point = &p;
    
    point->x=10;
    point->y=5;

    printf("%d %d", point->x, point->y);
    return 0;
}