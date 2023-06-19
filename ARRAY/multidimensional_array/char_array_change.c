#include <stdio.h>
#include <string.h>

int main( void )
{
    char strArr[][4] = { "abc", "def", "ghi" };
    char temp[4];
    int i, j;

    const int ROW = sizeof( strArr ) / sizeof( strArr[0] );

    for ( i = 0; i < ROW; i++ )
        printf( "strArr[%d]: %s\n", i, strArr[i] );

    puts( "" ); // printf( "\n" );

    // exchange
    strcpy( temp, strArr[0] );
    strcpy( strArr[0], strArr[1] );
    strcpy( strArr[1], temp );

    // change
    strArr[2][0] = 'g';
    strArr[2][1] = 'g';
    strArr[2][2] = '\0';

    for ( i = 0; i < ROW; i++ )
        printf( "strArr[%d]: %s\n", i, strArr[i] );

    return 0;
}