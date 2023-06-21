#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    char name[10];
    int kor, math, eng;
    int totalScore;
    float average;
} Student;

void inputData( Student** );
void printStuArr( Student** );

int size = 0;

int main( void )
{
    Student* pArr[100] = { NULL };

    inputData( pArr );
    printStuArr( pArr );

    return 0;
}

void inputData( Student* pArr[] )
{
    Student* p;
    int n;

    printf( "Insert student info(number, name, kor, match, eng).\n" );
    printf( "After insertion, write q and press enter key.\n" );

    while( 1 )
    {
        p = malloc( sizeof( Student ) );

        printf( ">  " );
        n = scanf( "%d %s %d %d %d", &p->no, p->name, &p->kor, &p->math, p->eng );

        if( n != 5 )
        {
            free( p );
            break;
        }

        p->totalScore = p->kor + p->math + p->eng;
        p->average = p->totalScore / 3.0f;

        pArr[size++] = p;
    }
}

void printStudent( const Student* p )
{
    printf( "%2d %-10s %4d %4d %4d %4d %6.2f\n", p->no, p->name, p->kor, p->math, p->eng, p->totalScore, p->average );
}

void printStuArr( const Student* pArr[] )
{
    printf( "\nnumber name kor math eng total avg\n" );
    printf( "\n==================================\n" );

    while( *pArr )
        printStudent( *pArr++ );
}