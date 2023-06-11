#include <stdio.h>
#include <float.h>

int main( void )
{
    float f = 9.12345678901234567890;
    float f2 = 1.2345678901234567890;
    double d = 9.12345678901234567890;
    double ld = 9.12345678901234567890;

    printf( "1.2345678901234567890" );
    printf( "f: %f\n", f );
    printf( "f: %24.20f\n", f ); // precision is only just 7 decimal point digits.
    printf( "f2: %24.20f\n", f2 );
    printf( "d: %24.20f\n", d ); // precision is only just 15 decimal point digits.
    printf( "ld: %24.20lf\n", ld ); // same as above
    printf( "\n" );
    printf( "float: %e - %e\n", FLT_MIN, FLT_MAX );
    printf( "double: %e - %e\n", DBL_MIN, DBL_MAX );
    printf( "long double: %e - %e\n", LDBL_MIN, LDBL_MAX );

    return 0;
}