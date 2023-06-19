#include <stdio.h>

int main( void )
{
    int i = 100;
    int* pi = &i;
    int** ppi = &pi;
    int* pi2 = (int*)&pi;

    printf( "i: %d\n", i );
    printf( "&i: %p\n", &i );
    printf( "pi: %p\n", pi );
    printf( "&pi: %p\n", &pi );
    printf( "ppi: %p\n", ppi );
    printf( "*ppi: %p\n", *ppi );
    printf( "**ppi: %d\n", **ppi );
    printf( "pi2: %p\n", pi2 );
    printf( "*pi2: %p\n", *pi2 );
    printf( "**(int**)pi2: %d\n", **(int**)pi2 ); // type casting to get value with single pointer
    printf( "sizeof( pi ): %d\n", sizeof( pi ) );
    printf( "sizeof( ppi ): %d\n", sizeof( ppi ) );

    return 0;
}
