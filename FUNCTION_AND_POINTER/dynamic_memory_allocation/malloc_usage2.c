#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add( char* );
void printArr( void );

char* strArr[10];
int pos = 0;

int main( void )
{
    char input[50];

    printf( "put a word you want to save(exit: ENTER)\n> " );
    
    while( strlen( gets( input ) ) )
    {
        add( input );
        printf( "> " );
    }

    printf( "\nacuumulated words below\n" );
    printArr();

    return 0;
}

void add( char* str )
{ 
    char* tmp = (char*)malloc( sizeof( char ) * ( strlen( str ) + 1 ) );
    
    strcpy( tmp, str );
    strArr[pos++] = tmp;
}

void printArr( void )
{
    int i;
    printf( "[" );

    for( i = 0; i < pos; i++ )
        printf( "%s, ", strArr[i] );

    printf( "]\n" );
}