#include <stdio.h>

int main( void )
{
    float f = 12.12345f;

    printf( "%%f: %f\n", f ); // %f basically print upto 6 decimal point digits.
    printf( "%%8f: %8f\n", f ); // print upto 8 digit(including decimal point digits)
    // this code is same to printf( "%%8.6f: %f\n", f );
    printf( "%%.4f: %.4f\n", f ); // print upto 4 decimal point digits
    printf( "%%8.4f: %8.4f\n", f ); // out of total 8 digits, print only upto 4 digits after the decimal point
    printf( "%%08.4f: %08.4f\n", f ); // out of total 8 digits, print only upto 4 digits after the decimal point and fill 0 to the empty integer digits
    printf( "%%-8.4f: %-8.4f\n", f ); // out of total 8 digits, print only upto 4 digits after the decimal point and remove empty integer digits

    printf( "%%e: %e\n", f ); // print in exponential form
    printf( "%%g: %g\n", f ); // all digits are more than 7, print in exponential form

    printf( "%8.4f\n", 1234.12345 ); // print all even though the number of digits is insufficient
}