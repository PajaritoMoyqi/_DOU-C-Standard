#include <stdio.h>

extern int gv;

void gfunc( void );
static void sfunc( void );

static void sfunc( void )
{
    printf( "sfunc() from function_sub.c\n" );
    gv = 200;
}

void gfunc( void )
{
    sfunc();
    printf( "gfunc(%d)\n", gv );
}