#include <stdio.h>

int main( void )
{
    int i, j;
    short s;

    i = -10;
    i = +i; // + operator does nothing
    printf( "i: %d\n", i ); // -10

    j = -10;
    j = -j;
    printf( "j: %d\n", j ); // 10

    s = 10;
    printf( "s: %d, sizeof(s): %d\n", s, sizeof( s ) );
    printf( "+s: %d, sizeof(+s): %d\n", +s, sizeof( +s ) ); // +s changes its type automatically to int which is the thing we've learnt in chapter VARIABLE

    return 0;
}