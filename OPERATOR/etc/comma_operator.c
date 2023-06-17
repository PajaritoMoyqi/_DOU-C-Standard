#include <stdio.h>

int main( void )
{
    int i = 0, j = 0; // ',' is seperator
    int result = 0;

    // ',' is operator
    result = i = 3, i++, j++; // ( result = i = 3 ), i++, j++;
    printf( "i: %d, j: %d, result: %d\n", i, j, result );

    result = ( i = 3, i++, j++ );
    printf( "i: %d, j: %d, result: %d\n", i, j, result );

    return 0;
}