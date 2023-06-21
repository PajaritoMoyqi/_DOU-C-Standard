#include <stdio.h>

struct person
{
    char phoneNo[14];
    char name[10];
    struct person* next;
};

int main( void )
{
    struct person p1 = { "010-1234-1234", "John" };
    struct person p2 = { "010-2222-5555", "Pajarito" };
    struct person p3 = { "010-0000-9999", "Conomlye" };

    p1.next = &p2;
    p2.next = &p3;

    printf( "name: %s(%s)\n", p1.name, p1.phoneNo );
    printf( "next person's name: %s(%s)\n", p1.next->name, p1.next->phoneNo );
    printf( "last person's name: %s(%s)\n", p1.next->next->name, p1.next->next->phoneNo );

    return 0;
}