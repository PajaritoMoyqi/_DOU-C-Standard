#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10
int arr[SIZE];

int sumArr( void );
void printArr( void );
void fillArr( void );
void sortArr( void );

int main( void )
{
    int sum = 0, i = 0;
    void(* pfArr[10])( void ) = { fillArr, printArr, sortArr, printArr, sumArr };

    int(* pf)( void );

    srand( time( NULL ) );

    for( i = 0; *pfArr[i]; i++ )
    {
        if( i != 4 )
            pfArr[i]();
        else
        {
            pf = (int(*)( void ))pfArr[i];
            sum = pf();
        }
    }

    printf( "sum: %d\n", sum );
    
    return 0;
}

int sumArr( void )
{
    int i, sum = 0;

    for( i = 0; i < SIZE; i++ )
        sum += arr[i];

    return sum;
}

void printArr( void )
{
    int i;
    printf( "[" );

    for( i = 0; i < SIZE; i++ )
        printf( "%d ", arr[i] );
    
    printf( "]\n" );
}

void fillArr( void )
{
    int i;

    for( i = 0; i < SIZE; i++ )
        arr[i] = rand() % SIZE;
}

void sortArr( void )
{
    int i, j, tmp;

    for( i = 0; i < SIZE - 1; i++ )
        for( j = 0; j < SIZE - 1 - i; j++ )
            if( arr[j] > arr[j+1] )
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}