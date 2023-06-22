#include <stdio.h>

typedef struct student
{
    int no;
    char name[10];
    int kor;
    int math;
    int eng;
    int totalScore;
    float average;
} Student;

int main( void )
{
    FILE* fp;
    char* fname = "./bbb.txt";
    int i;
    Student* sp;

    char* format = "%2d %-10s %3d %3d %3d\n";

    Student sArr[] =
    {
        { 1, "Agile", 100, 100, 90 },
        { 2, "Cogoal", 80, 95, 90 },
        { 3, "Adellyna", 65, 100, 95 },
        { 4, "Creag", 70, 75, 80 }
    };

    const int LEN = sizeof( sArr ) / sizeof( Student );

    if( ( fp = fopen( fname, "w" ) ) == NULL )
    {
        printf( "can't open file %s.\n", fname );
        return 1;
    }

    for( i = 0; i < LEN; i++ )
    {
        sp = &sArr[i];

        fprintf( fp, format, sp->no, sp->name, sp->kor, sp->math, sp->eng );
        fprintf( stdout, format, sp->no, sp->name, sp->kor, sp->math, sp->eng );
    }

    fclose( fp );

    return 0;
}