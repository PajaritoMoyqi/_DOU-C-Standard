#include <stdio.h>
#include <stdlib.h>

typedef void( FUNC_T )( void );

void f1( void );
void f2( void );

FUNC_T** makeFuncPtrArr( int );

int main( void )
{
    FUNC_T** fpArr = makeFuncPtrArr( 5 );

    fpArr[0] = f1;
    fpArr[1] = f2;

    while( *fpArr )
    {
        (*fpArr)();
        fpArr++;
    }
}

void f1( void ) { printf( "f1() is called.\n" ); }
void f2( void ) { printf( "f2() is called.\n" ); }

FUNC_T** makeFuncPtrArr( int size ) // void(** makeFuncPtrArr( void ))( void )
{
    FUNC_T** fpArr = calloc( size, sizeof( FUNC_T* ) );

    return( fpArr );
}