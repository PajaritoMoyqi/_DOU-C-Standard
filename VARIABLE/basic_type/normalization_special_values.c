#include <stdio.h>
#include <float.h>

typedef union {
    int hex;
    float dec;
} int_float;

int main( void )
{
    int_float data;

    data.hex = 0x7F800000; // +infinity
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    data.hex = 0xFF800000; // -infinity
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    data.hex = 0x0; // +0
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    data.hex = 0x80000000; // -0
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    data.dec = FLT_MAX;
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    data.dec = FLT_MIN;
    printf( "hex=%08X \t dec=%e\n", data.hex, data.dec );

    return 0;
}