#include <stdio.h>

int main( void )
{
    double d = 85.4;
    int score = (int)d;

    printf( "%f\n", d ); // it's not changed
    printf( "%d\n", score );

    return 0;
}