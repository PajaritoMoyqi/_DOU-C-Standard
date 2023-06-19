#include <stdio.h>

extern int gv; // referential declaration

void printGv( void )
{
    printf( "printGv() - gv = %d\n", gv );
}