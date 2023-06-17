#include <stdio.h>
#include <math.h>

int main( void )
{
    int menu, num;

    while ( 1 )
    {
        printf( "(1) square\n" );
        printf( "(2) square root\n" );
        printf( "(3) log\n" );
        printf( "Select the menu you want (exit: 0) > " );
        scanf( "%d", &menu );

        if ( menu == 0 )
        {
            printf( "exit program...\n" );
            break;
        }
        else if ( !( 1 <= menu && menu <= 3 ) )
        {
            printf( "wrong menu.\n" );
            continue;
        }

        for ( ; ; )
        {
            printf( "write operand (exit calculation: 0, exit program: -1) > " );
            scanf( "%d", &num );

            if ( num == 0 ) break;
            if ( num == -1 ) goto exit; // get out from 'for' statement and 'while' statement at once

            switch ( menu )
            {
            case 1:
                printf( "result: %d\n", num*num );
                break;
            case 2:
                printf( "result: %lf\n", sqrt( (double)num ) );
                break;
            case 3:
                printf( "result: %lf\n", log( (double)num ) );
                break;
            }
        }
    }

    exit:
        return 0;
}