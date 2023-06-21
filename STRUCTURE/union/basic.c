#include <stdio.h>

union un_t
{
    char ch;
    int i;
    long long ll;
};

int main( void )
{
    union un_t u = { 'A' };
    union { char ch[10]; double d; } u2;
    
    printf( "sizeof( u ): %d\n", sizeof( u ) );
    printf( "sizeof( u2 ): %d\n", sizeof( u2 ) );

    printf( "u.ch: %#x\n", u.ch );
    printf( "u.i: %#x\n", u.i );
    printf( "u.ll: %#llx\n", u.ll );
    
    u.ll = 0x1234567890LL;
    printf( "u.ch: %#hhx\n", u.ch );
    printf( "u.i: %#x\n", u.i );
    printf( "u.ll: %#llx\n", u.ll );

    printf( "&u.ch: %p\n", &u.ch );
    printf( "&u.i: %p\n", &u.i );
    printf( "&u.ll: %p\n", &u.ll );

    return 0;
}