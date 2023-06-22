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
    Student s;

    char* inFormat = "%d %s %d %d %d";
    char* outFormat = "%2d %-10s %3d %3d %3d %4d %8.2f\n";

    if( ( fp = fopen( fname, "r" ) ) == NULL )
    {
        printf( "can't open file %s.\n", fname );
        return 1;
    }

    printf( "no  name      kor math eng total average\n" );
    printf( "========================================\n" );

    while( 1 )
    {
        i = fscanf( fp, inFormat, &s.no, &s.name, &s.kor, &s.math, &s.eng );
        if( i < 5 ) break;

        s.totalScore = s.kor + s.math + s.eng;
        s.average = s.totalScore / 3.0f;

        fprintf( stdout, outFormat, s.no, s.name, s.kor, s.math, s.eng, s.totalScore, s.average );
    }

    fclose( fp );

    return 0;
}