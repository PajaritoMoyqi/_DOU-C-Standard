#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stddef.h>

int main( void )
{
    wchar_t wch = L'가'; // in front of char, paste 'L' for let compiler know it is wide character

    setlocale( LC_ALL, "Korean" ); // locale setting

    wprintf( L"%c\n", wch );

    printf( "len: %d\n", strlen( "가나다123" ) ); // each Korean is 2 byte
    printf( "len: %d\n", wcslen( L"가나다123" ) ); // treat Korean as wide character(length: 1)

    return 0;
}