#include <stdio.h>

typedef struct student
{
    int no;
    char name[8];
    int kor, math, eng;
} Student;

int main( void )
{
    Student stuArr[] =
    {
        { 1, "KIM", 100, 90, 100 },
        { 2, "RYU", 90, 90, 100 },
        { 3, "LEE", 100, 90, 95 }
    };

    const int SIZE = sizeof( stuArr ) / sizeof( Student );
    Student s;
    int i;

    char* fname = "./bbb.txt";
    FILE* in_f = fopen( fname, "rb" );
    FILE* out_f = fopen( fname, "wb" );

    if( !in_f || !out_f )
    {
        printf( "problem occurred when open %s.\n", fname );
        return 1;
    }

    fwrite( stuArr, sizeof( Student ), SIZE, out_f );
    fflush( out_f ); // print all things in buffer and empty the buffer

    for( i = 0; i < SIZE; i++ )
    {
        fread( &s, sizeof( Student ), 1, in_f );
        printf( "%d %-8s %3d %3d %3d\n", s.no, s.name, s.kor, s.math, s.eng );
    }

    fclose( in_f );
    fclose( out_f );

    return 0;
}