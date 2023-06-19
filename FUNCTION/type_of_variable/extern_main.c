#include <stdio.h>

int gv = 100; // definitive declaration

void printGv( void );

int main( void )
{
    printf( "main() - gv = %d\n", gv );

    printGv();

    return 0;
}