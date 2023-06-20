#include <stdio.h>

int main( void )
{ 
    char str[] = "abcde";
    char *p = str;
    int i;

    printf( "str: %s", str );
    printf( "p: %s", p );

    for ( i = 0; i < sizeof( str ); i++ )
        printf( "p[%d]: %c, str[%d]: %c, &str[%d]: %p\n", i, p[i], i, str[i], i, &str[i] );

    while ( *p )
    {
        printf( "p: %p, *p: %c\n", p, *p );
        p++;
    }

    for ( p = str; *p; p++ ) ; // until meets '\0'

    printf( "p: %p\n", p );
    printf( "str: %p\n", str );
    printf( "strlen: %d\n", p - str );

    return 0;
}