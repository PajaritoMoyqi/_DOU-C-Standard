#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add( char* );
void printArr( void );

char** strArr;
int len = 2;
int pos = 0;

int main( void )
{
    char input[50];
    int i;

    strArr = malloc( sizeof( char* ) * len );

    printf( "put a word you want to save(exit: ENTER)\n> " );
    
    while( strlen( gets( input ) ) )
    {
        add( input );
        printf( "> " );
    }

    for( i = 0; i < pos; i++ )
        free( strArr[i] );

    free( strArr );

    return 0;
}

void add( char* str )
{ 
    char* tmp = (char*)malloc( sizeof( char ) * ( strlen( str ) + 1 ) );
    char** newStrArr;

    if( pos >= len )
    {
        newStrArr = malloc( sizeof( char* ) * len * 2 );

        memcpy( newStrArr, strArr, sizeof( char* ) * len );

        free( strArr );
        strArr = newStrArr;
        len *= 2;
    }

    strcpy( tmp, str );
    strArr[pos++] = tmp;
    
    printArr();
}

void printArr( void )
{
    int i;
    printf( "[" );

    for( i = 0; i < pos; i++ )
        printf( "%s, ", strArr[i] );

    printf( "]\n" );
}