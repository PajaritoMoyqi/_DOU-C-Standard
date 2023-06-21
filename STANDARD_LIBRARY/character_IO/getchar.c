#include <stdio.h>

int main( void )
{
    int ch;

    do
    {
        printf( "write one character. (exit: x) > " );
        ch = getchar();

        printf( "input: %c\n", ch );

        while( getchar() != '\n' ) ; // remove character(s) from buffer
    } while( ch != 'X' && ch != 'x' );

    printf( "exit by your input: %c\n", ch );

    return 0;
}