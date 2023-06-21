#include <stdio.h>

#define DEBUG
#define print_int(x) printf(#x": %d\n",x)

#if 1
int main( void )
{
    int x = 10;

#ifdef DEBUG
    print_int(x);
#endif

    return 0;
}

#else
int main( void )
{
    printf( "It's not gonna be executed." );
    return 0;
}
#endif