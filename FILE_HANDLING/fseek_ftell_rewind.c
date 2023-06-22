#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    char name[10];
    int kor, math, eng;
} Student;

int main( void )
{
    Student stuArr[] =
    {
        { 1, "Haolin", 100, 60, 40 },
        { 2, "Jepsink", 30, 40, 50 },
        { 3, "Droolyn", 90, 20, 20 },
        { 4, "Pakan", 80, 80, 80 }
    };
    const int SIZE = sizeof( stuArr ) / sizeof( Student );
    Student s;
    int i;

    char* fname = "./bbb.txt";
    FILE* fp = fopen( fname, "wb+" );

    if( !fp )
    {
        printf( "can't open file %s...\n", fname );
        return 1;
    }

    fwrite( stuArr, sizeof( Student ), SIZE, fp );
    fflush( fp );

    printf( "pos: %d\n", ftell( fp ) );

    rewind( fp ); // move to initial part of the file

    printf( "pos: %d\n", ftell( fp ) );

    printf( "print in order\n" );
    for( i = 0; i < SIZE; i++ )
    {
        fread( &s, sizeof( Student ), 1, fp );
        printf( "%d %-8s %3d %3d %3d, pos: %d\n", s.no, s.name, s.kor, s.math, s.eng, ftell( fp ) );
    }

    printf( "print in reverse order\n" );
    for( i = 1; i <= SIZE; i++ )
    {
        fseek( fp, sizeof( Student ) * -i, SEEK_END );
        fread( &s, sizeof( Student ), 1, fp );
        printf( "%d %-8s %3d %3d %3d, pos: %d\n", s.no, s.name, s.kor, s.math, s.eng, ftell( fp ) );
    }

    fclose( fp );

    return 0;
}