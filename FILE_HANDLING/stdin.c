#include <stdio.h>

int main( void )
{
    char* fileName = "./bbb.txt";
    FILE* fwt = fopen( fileName, "wt" );
    char buf[256];
    int i = 0;

    printf( "write contents that copies to file %s.\n", fileName );

    while( fgets( buf, sizeof( buf ), stdin ) != NULL )
        fputs( buf, fwt );
    
    fclose( fwt );

    return 0;
}