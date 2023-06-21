#include <stdio.h>

struct point { int x, y };
struct circle
{
    struct point* p;
    int r;
};

int main( void )
{
    struct point p = { 1, 2 };
    struct circle c1 = { &p, 3 };
    struct circle c2, c3;

    c2 = c1; // shallow copy

    c3 = c1;
    c3.p = (struct point*)malloc( sizeof( struct point ) );
    *c3.p = *c1.p; // deep copy

    printf( "c1.p->x: %d\tc1.p->y:%d\tc1.r: %d\n", c1.p->x, c1.p->y, c1.r );
    printf( "c2.p->x: %d\tc2.p->y:%d\tc2.r: %d\n", c2.p->x, c2.p->y, c2.r );
    printf( "c3.p->x: %d\tc3.p->y:%d\tc3.r: %d\n", c3.p->x, c3.p->y, c3.r );

    c1.p->x = 100;

    printf( "c1.p->x: %d\tc1.p->y:%d\tc1.r: %d\n", c1.p->x, c1.p->y, c1.r );
    printf( "c2.p->x: %d\tc2.p->y:%d\tc2.r: %d\n", c2.p->x, c2.p->y, c2.r );
    printf( "c3.p->x: %d\tc3.p->y:%d\tc3.r: %d\n", c3.p->x, c3.p->y, c3.r );
    
    return 0;
}