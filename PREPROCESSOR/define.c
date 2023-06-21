#include <stdio.h>

#define PI 3.141592
#define NEW_LINE '\n'
#define EMAIL "aaa@pajarito.com"
#define SECOND 1
#define MIN (60 * SECOND)
#define HOUR (60 * MIN)
#define MAX 65535
#define LONG_MSG "This is " \
    "a very very " \
    "long message."

int main( void )
{
    const int MAX2 = 200;
    int timestamp = 7299;
    int sec = 0;
    int min = 0;
    int hour = 0;

    printf( "PI: %f\n", PI );
    printf( "NEW_LINE: %c\n", NEW_LINE );    
    printf( "EMAIL: %s\n", EMAIL );
    printf( "MAX: %d\n", MAX );
    printf( "MAX2: %d\n", MAX2 );

#undef MAX
#define MAX 999

    printf( "MAX: %d\n", MAX );

    hour = timestamp / HOUR;
    sec = timestamp % HOUR;

    printf( "%d is %d hour %d second.\n", timestamp, hour, sec );
    printf( LONG_MSG "\n" );

    return 0;
}