#include <stdio.h>

typedef struct student
{
    int no;
    char name[10];
    int kor, math, eng;
} Student;

int main( void )
{
    Student s1;
    Student s2 = { 2, "Pajarito", 100, 100, 50 };

    s1 = s2; // easy assignment

    s1.no = 1;
    s1.name = "Crown";

    return 0;
}