#include <stdio.h>

#define EMAIL "ask@pajarito.com"

int main( void )
{
    char ch = 65; // char ch = 'A';
    char email[] = "ask@pajarito.com";

    int i = 0xFF;
    long long ll = 12345678901234LL; // we need LL

    unsigned ui = 0xFFFFffff;
    unsigned long long ull = 0xFFFFffffFFFFffffLL;

    printf( "ch: '%c', %d\n", ch, ch );
    printf( "i: %d, %x, %X, %#X, %o, %#o\n", i, i, i, i, i, i ); // # gives 0x to the front of hexadecimal number and 0 to octal number
    printf( "ll: %lld\n", ll ); // also can remove ll after % specifier

    printf( "ui: %u, %#x, %d\n", ui, ui, ui ); // unsinged
    printf( "ull: %llu, %#llx, %lld\n", ull, ull, ull );

    printf( "Ask me, " EMAIL " please.\n" );
    printf( "Ask me, %s please.\n", email );

    printf( "[12345678901234567890]\n" );
    printf( "[%s]\n", email );
    printf( "[%20s]\n", email ); // left alignment
    printf( "[%-20s]\n", email ); // right alignment
    printf( "[%.8s]\n", email ); // only 8 characters from left
}