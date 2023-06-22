#include <stdio.h>
#include <string.h>

int main( void )
{
    char* fname = "test.c";
    char keyword[50];
    char buf[1024];
    int lineNo, result = 0;

    FILE* fp = fopen( fname, "r" );

    if( fp == NULL )
    {
        printf( "can't open file %s.\n", fname );
        return 1;
    }

    printf( "what are you searching? > " );
    scanf( "%s", keyword );

    for( lineNo = 1; fgets( buf, sizeof( buf ), fp ); lineNo++ )
    {
        if( strstr( buf, keyword ) )
        {
            result++;
            printf( "%3d: %s", lineNo, buf );
        }
    }

    printf( "\nin file [%s], found %d number of '%s'.\n", fname, result, keyword );

    fclose( fp );
    
    return 0;
}