#include <stdio.h>

int main( void )
{
    // we can check the size of variable, constant and type

    int i = 100;
    int j = 1000;

    // variable
    printf( "sizeof(i): %d byte(s)\n", sizeof i ); // you can use it without parenthesis when it comes to variable case...
    printf( "sizeof(j): %d byte(s)\n", sizeof( j ) );

    // constant
    printf( "sizeof(100): %d byte(s)\n", sizeof( 100 ) );

    // type
    printf( "sizeof(char): %d byte(s)\n", sizeof( char ) );
    printf( "sizeof(short): %d byte(s)\n", sizeof( short ) );
    printf( "sizeof(int): %d byte(s)\n", sizeof( int ) ); // it varies to computer architecture (normally 4 or 2)
    printf( "sizeof(long): %d byte(s)\n", sizeof( long ) );
    printf( "sizeof(long long): %d byte(s)\n", sizeof( long long ) );
    printf( "sizeof(float): %d byte(s)\n", sizeof( float ) );
    printf( "sizeof(double): %d byte(s)\n", sizeof( double ) );
    printf( "sizeof(long double): %d byte(s)\n", sizeof( long double ) );
}