#include <stdio.h>

char* getUserInput( char* );

int main( void )
{
    char input[20];
    char* str = getUserInput( input );

    printf( "input: %s\n", str );

    return 0;
}

char* getUserInput( char* input )
{
    printf( "write one word > " );
    scanf( "%s", input );

    return input;
}