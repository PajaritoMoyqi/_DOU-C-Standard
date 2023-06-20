#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int arr[] = { 1, 2, 3, 4, 5 };
    const int LEN = sizeof( arr ) / sizeof( arr[0] );

    int* p = malloc( sizeof( arr ) ); // automatic type casting
    int i;

    if( p == NULL ) // if there is no space for p
    {
        printf( "out fo memory\n" );
        exit(1);
    }

    for( i = 0; i < LEN; i++ )
    {
        p[i] = arr[i] * 10;
        printf( "arr[%d]: %d, p[%d]: %d\n", i, arr[i], i, p[i] );
    }

    return 0;
}