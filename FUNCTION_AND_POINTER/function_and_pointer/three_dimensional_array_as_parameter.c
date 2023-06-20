#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle( char*(* arr)[4], int row, int col );
void printArr( char*(* arr)[4], int row, int col );

int main( void )
{
    char* str2DArr[][4] =
    {
        { "(0,0)", "(0,1)", "(0,2)", "(0,3)" },
        { "(1,0)", "(1,1)", "(1,2)", "(1,3)" },
        { "(2,0)", "(2,1)", "(2,2)", "(2,3)" }
    };

    const int ROW = sizeof( str2DArr ) / sizeof( str2DArr[0] );
    const int COL = sizeof( str2DArr[0] ) / sizeof( str2DArr[0][0] );

    srand( (unsigned)time( NULL ) );

    printArr( str2DArr, ROW, COL );
    printf( "\n" );

    shuffle( str2DArr, ROW, COL );
    printArr( str2DArr, ROW, COL );

    return 0;
}

void shuffle( char*(* arr)[4], int row, int col )
{
    int i, j, idx1, idx2;
    char* tmp;

    for( i = 0; i < row; i++ )
    {
        for( j = 0; j < col; j++ )
        {
            idx1 = rand() % row;
            idx2 = rand() % col;

            tmp = arr[i][j];
            arr[i][j] = arr[idx1][idx2];
            arr[idx1][idx2] = tmp;
        }
    }
}

void printArr( char*(* arr)[4], int row, int col )
{
    int i, j;

    for( i = 0; i < row; i++ )
        for( j = 0; j < col; j++ )
            printf( "arr[%d][%d]: %s\n", i, j, arr[i][j] );
}