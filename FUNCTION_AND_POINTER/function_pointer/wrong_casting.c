#include <stdio.h>

int add( int, int );

int main( void )
{
    int(* pf)( void ) = add; // worng casting but no compile error
    int result = pf();

    printf( "result: %d\n", result ); // unexpected result

    return 0;
}

int add( int a, int b )
{
    return a + b;
}