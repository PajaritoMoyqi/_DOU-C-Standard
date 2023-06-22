#include <stdio.h>

int main( void )
{
    char* fname = "./bbb.txt";
    FILE* fp = fopen( fname, "w" );

    int fileSize = 1024*1024*1024;

    fseek( fp, fileSize - 1, SEEK_SET );

    if( fputc( '\0', fp ) == EOF )
    {
        printf( "failed to make file...\n" );
        return 1;
    }

    fclose( fp );

    printf( "%s was made.\n", fname );
    
    fp = fopen( fname, "r" );
    
    fseek( fp, 0, SEEK_END );
    printf( "file size is %ld byte.\n", ftell( fp ) );

    fclose( fp );

    return 0;
}