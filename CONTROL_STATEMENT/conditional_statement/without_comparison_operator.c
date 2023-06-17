#include <stdio.h>

int main( void )
{
    int x = 0;

    printf( "if x=%d, they are true.\n", x );

    if ( x == 0 ) printf( "x == 0\n" );
    if ( x != 0 ) printf( "x != 0\n" );
    if ( x ) printf( "x\n" );
    if ( !x ) printf( "!x\n" );

    printf( "\n" );

    x = 1;

    printf( "if x=%d, they are true.\n", x );

    if ( x == 0 ) printf( "x == 0\n" );
    if ( x != 0 ) printf( "x != 0\n" );
    if ( x ) printf( "x\n" );
    if ( !x ) printf( "!x\n" );

    return 0;
}