#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct custInfo
{
    char custName[20];
    char phoneType;
    union
    {
        char homeNo[15];
        char officeNo[15];
        char cellNo[15];
    };
} CustInfo;

void printCustInfoArr( CustInfo*, const int );
void printCustInfo( CustInfo );

int main( void )
{
    CustInfo cust[] =
    {
        { "Choi", 'H', "02-1234-1234" },
        { "Juan", 'M', "010-1234-1234" },
        { "Park", 'H', "070-1234-1234" }
    };

    const int LEN = sizeof( cust ) / sizeof( cust[0] );
    printCustInfoArr( cust, LEN );

    return 0;
}

void printCustInfoArr( CustInfo arr[], const int LEN )
{
    int i;

    for( i = 0; i < LEN; i++ ) 
    {
        printCustInfo( arr[i] );
        puts( "" );
    }
}

void printCustInfo( CustInfo c )
{
    printf( "name: %s\n", c.custName );

    switch( c.phoneType )
    {
        case 'H':
            printf( "home: %s\n", c.homeNo );
            break;
        case 'M':
            printf( "phone: %s\n", c.cellNo );
            break;
        case 'O':
            printf( "office: %s\n", c.officeNo );
            break;
    }
}