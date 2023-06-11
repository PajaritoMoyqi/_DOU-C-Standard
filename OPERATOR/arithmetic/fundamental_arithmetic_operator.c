#include <stdio.h>

int main( void )
{
    long long a = 1000000 * 1000000;
    long long b = 1000000 * 1000000LL; // automatic type conversion's gonna happen

    printf( "%lld\n", a ); // overflow
    printf( "%lld\n", b ); // good job

    return 0;
}