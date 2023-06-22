#include <stdio.h>

int main( void )
{
    unsigned char buf[16];
    int i, cnt;

    char* fname = "./bbb.txt";
    FILE* in_f = fopen( fname, "rb" );

    if( !in_f )
    {
        printf( "can't open file %s.\n", fname );
        return 1;
    }

    while( (cnt = fread( buf, 1, sizeof( buf ), in_f )) > 0 )
    {
        for( i = 0; i < cnt; i++ )
            printf( "%02X ", buf[i] );
        printf( "\n" );
    }

    fclose( in_f );

    return 0;
}