#include <stdio.h>
#include <string.h>

int main( void )
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[2][3] = { 0 }; // all of values are 0

    const int LEN = sizeof( arr ) / sizeof( arr[0] );
    const int COL = sizeof( arr2[0] ) / sizeof( arr2[0][0] );
    int i;

    for( i = 0; i < LEN; i++ )
        printf( "arr[%d]: %d, arr[%d][%d]: %d\n", i, arr[i], i/COL, i%COL, arr2[i/COL][i%COL] );

    if( memcmp( arr, arr2, sizeof( arr ) ) == 0 )
        printf( "arr and arr2 are same.\n" );
    else
        printf( "arr and arr2 are different.\n" );

    // copy
    memcpy( arr2, arr, sizeof( arr ) );

    for( i = 0; i < LEN; i++ )
        printf( "arr[%d]: %d, arr[%d][%d]: %d\n", i, arr[i], i/COL, i%COL, arr2[i/COL][i%COL] );

    if( memcmp( arr, arr2, sizeof( arr ) ) == 0 )
        printf( "arr and arr2 are same.\n" );
    else
        printf( "arr and arr2 are different.\n" );

    return 0;
}