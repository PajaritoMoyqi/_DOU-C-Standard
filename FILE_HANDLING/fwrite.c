#include <stdio.h>
#include <string.h>

int main( void )
{
    char* fileName1 = "./aaa.txt";
    char* fileName2 = "./bbb.txt";

    FILE* fwb = fopen( fileName1, "wb" );
    FILE* fwt = fopen( fileName2, "wt" );

    FILE* frb = fopen( fileName1, "rb" );
    FILE* frt = fopen( fileName2, "rt" );

    char* str = "AB12";
    int i = 12;
    float f = 12.625f;
    int ch;

    fwrite( str, sizeof( char ), strlen( str ), fwb );
    fwrite( &i, sizeof( int ), 1, fwb );
    fwrite( &f, sizeof( float ), 1, fwb );

    fprintf( fwt, "%s%d%6.3f\n", str, i, f );

    fclose( fwb );
    fclose( fwt );

    printf( "= %s = \n", fileName1 );
    while( (ch = fgetc( frb )) != EOF )
        printf( "%02X %c\n", ch, ch );
    printf( "\n" );

    printf( "= %s = \n", fileName2 );
    while( (ch = fgetc( frt )) != EOF )
        printf( "%02X %c\n", ch, ch );
    printf( "\n" );

    fclose( frb );
    fclose( frt );

    return 0;
}