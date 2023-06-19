#include <stdio.h>

int main( void )
{
    int i = 5;
    int* p = &i;

    printf( "i: %d\n", i ); // value of i
    printf( "&i: %d\n", &i ); // address of i
    printf( "p: %d\n", p ); // value of pointer == address of i
    printf( "&p: %d\n", &p ); // address of pointer

    return 0;
}