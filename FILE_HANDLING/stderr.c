#include <stdio.h>

int main( void )
{
    FILE* fp;
    char* fileName = "./bbb.txt";

    fprintf( stdout, "Hi, stdout\n" );
    fprintf( stderr, "Hi, stderr\n" );
    
    fp = freopen( fileName, "w", stderr );

    if( fp == NULL )
    { 
        printf( "freopen(): error.\n" );
        return 1;
    }

    fprintf( stdout, "Hi-2, stdout\n" );
    fprintf( stderr, "Hi-2, stderr\n" );

    fclose( fp );

    return 0;
}