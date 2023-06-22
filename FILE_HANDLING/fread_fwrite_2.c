#include <stdio.h>

#define BUF_SZ 4096

int main( void )
{
    char* fileName1 = "./aaa.txt";
    char* fileName2 = "./bbb.txt";

    FILE* frb = fopen( fileName1, "rb" );
    FILE* fwb = fopen( fileName2, "wb" );

    char buf[BUF_SZ];
    int readSZ = BUF_SZ;

    if( frb == NULL )
    {
        printf( "problem occurred when open %s.\n", fileName1 );
        return 1;
    }

    while( readSZ == BUF_SZ )
    {
        readSZ = fread( buf, sizeof( char ), BUF_SZ, frb );
        fwrite( buf, sizeof( char ), readSZ, fwb );
    }

    if( feof( frb ) )
        printf( "copy success! (%s -> %s)\n", fileName1, fileName2 );
    else
        printf( "fail to copy file %s...", fileName1 );

    fclose( frb );
    fclose( fwb );

    return 0;
}