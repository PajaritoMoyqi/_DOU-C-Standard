#include <stdio.h>

void printFILEInfo( FILE* );

int main( void )
{
    printf( "[stdin]\n" ); printFILEInfo( stdin );
    printf( "[stdout]\n" ); printFILEInfo( stdout );
    printf( "[stderr]\n" ); printFILEInfo( stderr );

    return 0;
}

void printFILEInfo( FILE* f )
{
    printf( "_ptr: %p\n", f->_ptr );
    printf( "_cnt: %d\n", f->_cnt );
    printf( "_base: %p\n", f->_base );
    printf( "_flag: %d\n", f->_flag );
    printf( "_file: %d\n", f->_file );
    printf( "_charbuf: %d\n", f->_charbuf );
    printf( "_bufsiz: %d\n", f->_bufsiz );
    printf( "_tmpfname: %s\n", f->_tmpfname );
    printf( "\n" );
}
