#include <stdio.h>

static int sv;

void fn1()
{
    static int sv2 = 1;
    int lv = 1;

    printf( "fn1() - sv: %d, lv: %d\n", sv2++, lv++ );
}

void fn2()
{
    sv = 100;
    printf( "fn2() - sv: %d\n", sv );
}

int main( void )
{
    fn1();
    fn1();
    fn1();
    fn2();

    return 0;
}