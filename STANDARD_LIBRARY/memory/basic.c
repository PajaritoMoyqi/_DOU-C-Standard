#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void shuffle( char* arr, int len )
{
    int i, idx;
    char tmp;

    for( i = 0; i < len; i++ )
    {
        idx = rand() % len;
        tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }
}

char* makeQuestion( char* answer )
{
    const int LEN = strlen( answer );
    char* q = calloc( LEN + 1, sizeof( char ) ); 

    memcpy( q, answer, LEN ); // copy q to answer == strncpy( q, answer, LEN );
    shuffle( q, LEN );

    return q;
}

char* getHint( char* hint, char* answer, int len )
{
    int i, idx, cnt = 0;
    char* tmp;

    for( i = 0; i < len; i++ )
        if( hint[i] == '_' )
            cnt++;

    if( cnt <= 2 ) return hint;

    while( 1 )
    {
        idx = rand() % len;

        if( hint[idx] == '_' )
        {
            hint[idx] = answer[idx];
            break;
        }
    }

    return hint;
}

int main( void )
{
    char* strArr[] = { "change", "love", "hope", "error" };
    const int LEN = sizeof( strArr ) / sizeof( strArr[0] );
    char* question, *answer;
    char input[50];
    char hint[50];

    srand( (unsigned)time( NULL ) );

    answer = strArr[rand() % LEN];
    question = makeQuestion( answer );

    memset( hint, '_', strlen( answer ) );
    hint[strlen( answer )] = '\0';

    while( 1 )
    {
        printf( "Question: %s\n", question );
        printf( "Your answer: " );

        gets( input );

        if( memcmp( answer, input, strlen( answer ) ) == 0 )
        {
            printf( "Correct.\n" );
            break;
        }
        else
        {
            printf( "Wrong. Try again.\n" );
            printf( "HINT: %s\n\n", getHint( hint, answer, strlen( answer ) ) );
        }
        
    }
}