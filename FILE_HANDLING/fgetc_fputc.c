#include <stdio.h>

int main( void )
{
    char* fname1 = "./aaa.txt";
    char* fname2 = "./bbb.txt";
    int ch = 0;

    FILE* in_f = fopen( fname1, "r" );
    FILE* out_f = fopen( fname2, "w" );

    if( !in_f || !out_f )
    {
        printf( "can't open %s file.\n", !in_f ? fname1 : fname2 );
        return 1;
    }

    printf( "start copying from [%s] to [%s]...\n", fname1, fname2 );

    while( ( ch = fgetc( in_f ) ) != EOF )
        fputc( ch, out_f );

    if( ferror( in_f ) || ferror(out_f) )
        printf( "Error occurred...\n" );
    else
        printf( "copy done...\n" );

    fclose( in_f );
    fclose( out_f );

    return 0;
}