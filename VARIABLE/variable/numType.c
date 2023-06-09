#include <stdio.h>

int main( void )
{
    // 0x1234567890 is approximately 78 billion
    short s = 0x1234567890; // upto about 32,000
    int i = 0x1234567890; // upto about 2.1 billion

    printf( "%#llx=%lld\n", 0x1234567890, 0x1234567890 ); // ll means long long

    // Hexadecimal
    printf( "\nHexadecimal\n" );
    // high digit is cut
    printf( "s: %#x\n", s );
    printf( "i: %#x\n", i );

    // Decimal
    printf( "\nDecimal\n" );
    printf( "s: %d\n", s );
    printf( "i: %d\n", i );

    return 0;
}