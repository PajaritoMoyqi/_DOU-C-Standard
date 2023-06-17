#include <stdio.h>
#define LEN 32

void printToBinary( int dec )
{
    char bin[LEN] = { 0 };
    int pos = LEN;
    int i;

    do
    {
        bin[--pos] = ( dec & 1 );
        dec = dec >> 1;
        dec = dec & 0x7fffffff; // most biggest int -> 0111 1111 1111 1111 1111 1111 1111 1111 (2)
    } while ( dec != 0 );

    for ( i = 0; i < LEN; i++ )
        printf( "%d", bin[i] );

    printf( "\n" );
}

int main( void )
{
    char p = 10;
    char n = -10;

    printf( "p: %d \t", p ); printToBinary( p );
    printf( "~p: %d \t", ~p ); printToBinary( ~p );
    printf( "~p+1: %d \t", ~p + 1 ); printToBinary( ~p + 1 );
    printf( "~~p: %d \t", ~~p ); printToBinary( ~~p );

    printf( "\n" );
    printf( "n: %d \t", n );
    printf( "~(n-1): %d \t", ~( n - 1 ) );
}