#include <stdio.h>

typedef enum direction { L, R, U, D } Direction;
typedef struct { int x, y } Point;

char* dirName[] = { "L", "R", "U", "D" };

void go( Point*, Direction, int );

int main( void )
{
    Point p = { 0 };
    int i;

    for( i = L; i <= D; i++ )
        printf( "%s: %d\n", dirName[i], i );

    go( &p, D, 5 );
    go( &p, R, 10 );
    go( &p, U, 2 );
    go( &p, L, 1 );

    return 0;
}

void go( Point* p, Direction dir, int n )
{
    printf( "[%-5s, %2d] ", dirName[dir], n );
    printf( "(%2d, %2d) -> ", p->x, p->y );

    switch ( dir )
    {
        case L: p->x += -n; break; 
        case R: p->x += n; break;
        case U: p->y += -n; break;
        case D: p->y += n; break;
    }

    printf( "(%2d, %2d)\n", p->x, p->y );

    return p;
}