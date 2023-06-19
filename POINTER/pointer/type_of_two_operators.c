#include <stdio.h>

int main( void )
{
    int i = 5;
    int* p = &i;

    *p = *p + 1;

    printf( "i: %d\n", i );
    printf( "&i: %d\n", &i );
    printf( "*&i: %d\n", *&i );

    printf( "p: %d\n", p );
    printf( "*p: %d\n", *p );
    printf( "&*p: %d\n", &*p );

    return 0;
}