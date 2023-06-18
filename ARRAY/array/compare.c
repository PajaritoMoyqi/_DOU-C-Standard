#include <stdio.h>
#include <string.h>

int main( void )
{
    int arr1[] = { 2, 3, 5, 7 }; // without length
    int arr2[sizeof( arr1 ) / sizeof(arr1[0])];
    int arr3[sizeof( arr1 ) / sizeof(arr1[0])];

    const int LEN = sizeof( arr1 ) / sizeof(arr1[0]);
    int i;
    int chk = 0;

    // method 1
    for( i = 0; i < LEN; i++ )
        arr2[i] = arr1[i];

    // method 2
    memcpy( arr3, arr1, sizeof( arr1 ) );

    arr2[0] = 100;

    for( i = 0; i < LEN; i++ )
        printf( "arr1[%d]: %d, arr2[%d]: %d, arr3[%d]: %d\n", i, arr1[i], i, arr2[i], i, arr3[i] );

    chk = memcmp( arr2, arr1, sizeof( arr1 ) );

    if( !chk )
        printf( "arr1 and arr2 is same.\n" );
    else
        printf( "arr1 and arr2 is different.\n" );

    chk = memcmp( arr3, arr1, sizeof( arr1 ) );

    if( !chk )
        printf( "arr1 and arr3 is same.\n" );
    else
        printf( "arr1 and arr3 is different.\n" );

    return 0;
}