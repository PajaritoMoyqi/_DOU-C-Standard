#include <stdio.h>

int main( void )
{
    printf( "The most recent modified time: %s\n", __TIMESTAMP__ );
    printf( "Compiled date: %s\n", __DATE__ );
    printf( "Compiled time: %s\n", __TIME__ );
    printf( "File name: %s\n", __FILE__ );
    printf( "Line number: %s\n", __LINE__ );

    return 0;
}