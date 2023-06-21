#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main( void )
{
    char input[50] = { 0 };
    int pos = 0;
    int ch;

    printf( "write only numbeer. > " );

    while( 1 )
    { 
        ch = getch();

        if( ch == '\r' ) // enter
        {
            puts( "" );
            break;
        }

        if( '1' <= ch && ch <= '9' )
        {
            putch( ch );
            input[pos++] = ch;
        }
        else if( ch == '\b' && pos != 0 ) // backspace
        {
            putch( '\b' );
            putch( ' ' );
            putch( '\b' );
            input[pos--] = '\0';
        }
    }

    printf( "input: %s\n", input );

    return 0;
}