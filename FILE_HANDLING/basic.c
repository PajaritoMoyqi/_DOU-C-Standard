#include <stdio.h>
#include <errno.h>

int main( void )
{
    char* fileName = "./open.txt";
    FILE* fp = fopen( fileName, "r" );

    if( fp == NULL )
    {
        printf( "failed to open file in read mode.\n", fileName );
        printf( "errno: %d\n", errno );
    }
    else
        printf( "success - %s opened in read mode\n", fileName );

    fp = fopen( fileName, "w" );
    errno = 0; // reset error code

    if( fp == NULL )
    {
        printf( "failed to open file in write mode.\n", fileName );
        printf( "errno: %d\n", errno );
    }
    else
        printf( "success - %s opened in write mode\n", fileName );

    printf( "FOPEN_MAX: %d\n", FOPEN_MAX );

    fclose( fp );
    printf( "file '%s' closed.\n", fileName );

    return 0;
}