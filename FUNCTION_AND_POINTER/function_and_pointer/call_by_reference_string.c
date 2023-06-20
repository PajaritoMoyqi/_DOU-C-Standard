#include <stdio.h>

void changeX( char** );

int main( void )
{
    char* x = "AAA";
    
    printf( "%s\n", x );

    changeX( &x );

    printf( "%s\n", x );

    return 0;
}

void changeX( char** x )
{
    *x = "ZZZ";
}