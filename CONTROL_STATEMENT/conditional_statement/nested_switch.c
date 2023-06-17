#include <stdio.h>

int main( void )
{
    char gender;
    char regNo[15];

    printf( "write your RRN > " );
    scanf( "%s", regNo );

    gender = regNo[7];

    switch( gender )
    {
        case '1':
        case '3':
            switch( gender )
            {
                case '1':
                    printf( "You are man who was born before 2000.\n" );
                    break;
                case '3':
                    printf( "You are man who was born after 2000.\n" );
            }
            break;
        case '2':
        case '4':
            switch( gender )
            {
                case '2':
                    printf( "You are woman who was born before 2000.\n" );
                    break;
                case '4':
                    printf( "You are woman who was born after 2000.\n" );
            }
            break;
        default:
            printf( "Invalid RRN number..." );
    }

    return 0;
}