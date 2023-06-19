#include <stdio.h>

int gv = 100;

void gfunc( void ); // keyword 'extern' is omitted
static void sfunc( void );

extern int main( void )
{
    gfunc(); // from function_sub.c
    sfunc(); // from function_main.c

    return 0;
}

static void sfunc( void )
{
    printf( "sfunc() from function_main.c\n" );
}