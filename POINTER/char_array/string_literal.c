#include <stdio.h>
#include <string.h>

int main( void )
{
    char chArr[] = "abc";
    char *ps = "abc";
    int i;

    printf( "chArr: %s, ps: %s\n", chArr, ps );

    for ( i = 0; i < sizeof( chArr ); i++ )
        printf( "chArr[%d]: %c, ps[%d]: %c\n", i, chArr[i], i, ps[i] );

    strcpy( chArr, "ABC" );
    // strcpy( ps, "ABC" ); // can't change string literal
    // chArr = "ABC"; // can't change constant
    ps = "ABC";
    chArr[1] = 'Z';
    // ps[1] = 'Z'; // can't change string literal

    printf( "chArr: %s, ps: %s\n", chArr, ps );

    return 0;
}