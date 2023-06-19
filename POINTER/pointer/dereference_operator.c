#include <stdio.h>

int main( void )
{
    int i = 5;
    int* p = &i;

    *p = *p + 1;

    printf( "i: %d\n", i ); // value of i
    printf( "*p: %d\n", *p ); // value of the value that points address of i has
    printf( "&i: %d\n", &i ); // address of i
    printf( "p: %d\n", p ); // value of pointer == address of i

    return 0;
}