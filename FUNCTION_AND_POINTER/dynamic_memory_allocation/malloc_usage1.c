#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mySubstr( char* src, int fr, int to );

int main( void )
{
    char str[] = "123456789";

    printf( "%s\n", str );
    printf( "%s\n", mySubstr( str, 3, 6 ) );

    return 0;
}

char* mySubstr( char* src, int fr, int to )
{
    char* newStr;
    int len, diff = to - fr;

    if( src == NULL ) return src;

    len = strlen( src );

    if ( fr > to || to > len || fr < 0 ) return NULL;

    newStr = (char*)malloc( sizeof( char ) * ( diff + 1 ) );

    memcpy( newStr, src + fr, diff );
    *(newStr + diff) = '\0';

    return newStr;
}