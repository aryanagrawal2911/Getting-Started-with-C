#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char *name;
    int roll;
    double marks;
};

void display(struct Student*);
void initialize(struct Student*);

int main(int argc, char const *argv[])
{

    struct Student s1;
    initialize(&s1);
    display(&s1);

    return 0;
}

void initialize(struct Student *s1)
{
    (*s1).name = (char*)malloc(25 * sizeof(char));

    printf("Enter name :");
    scanf("%s", (*s1).name);

    printf("Enter roll : ");
    scanf("%d", &(*s1).roll);

    printf("Enter marks : ");
    scanf("%lf", &(*s1).marks);
}

void display(struct Student *s1)
{

    printf("Name is : %s\n", (*s1).name);
    printf("Roll is : %d\n", (*s1).roll);
    printf("Marks are : %lf\n", (*s1).marks);
}
