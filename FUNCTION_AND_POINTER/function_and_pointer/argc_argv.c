#include <stdio.h>
#include <stdlib.h> // to use atoi()

int main( int argc, char* argv[] )
{
    int i, num;

    printf( "argc: %d\n", argc );

    for( i = 0; i < argc; i++ )
        printf( "argv[%d]: %s\n", i, argv[i] );

    num = atoi( argv[2] );
    printf( "num: %d\n", num * 100 );

    return 1;
}