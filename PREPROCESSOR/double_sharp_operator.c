#include <stdio.h>

#define CURRENCY_KR "won"
#define CURRENCY_kr CURRENCY_KR
#define CURRENCY_US "dollar"
#define CURRENCY_us CURRENCY_US

#define DATE_FORMAT_KR "YYYY/MM/DD"
#define DATE_FORMAT_US "MM/DD/YY"

// #define call(fn, na) get_ ## fn ## _ ## na ## () // not working
#define getCurrency(na) CURRENCY_ ## na

void get_dateFormat_kr( void );
void get_dateFormat_us( void );

int main( void )
{
    // call( dateFormat, kr ); // not working
    // call( dateFormat, us ); // not working

    printf( "Currency of %s: %s\n", "KR", getCurrency(KR) );
    printf( "Currency of %s: %s\n", "us", getCurrency(us) );

    return 0;
}

void get_dateFormat_kr( void )
{
    printf( "get_dateFormat_kr(): %s\n", DATE_FORMAT_KR );
}

void get_dateFormat_us( void )
{
    printf( "get_dateFormat_us(): %s\n", DATE_FORMAT_US );
}