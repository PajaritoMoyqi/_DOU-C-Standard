#include <stdio.h>

int main( void )
{
    int i, j;

    for( i = 1, j = 10; i <= 10; i++, j-- ) // we use ',' operator
        printf( "%d \t %d\n", i, j );

    return 0;
}