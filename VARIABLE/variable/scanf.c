#include <stdio.h>
#pragma warning(disable:4996) // remove warning that let us recommend to use alternative function

int main( void )
{
    float f;
    double d;

    printf( "Enters two real numbers: >> " );
    scanf( "%f%lf", &f, &d ); // space between two variable is not obligatory
    // only %c cares of number of space from input

    printf( "first real number: %f\n", f );
    printf( "first real number: %f\n", d ); // when printf, f is enough to double variable
}