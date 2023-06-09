#include <stdio.h>

int main( void )
{
    // we don't need pointer here because we're not gonna make function

    int x = 10;
    int y = 100;
    int tmp;

    printf("x: %d, y: %d, tmp: %d\n", x, y, tmp);

    tmp = x;
    x = y;
    y = tmp;

    printf("x: %d, y: %d, tmp: %d\n", x, y, tmp);

    return 0;
}