#include <stdio.h>
#include <stdlib.h>

struct student
{
    char *name;
    int roll;
    double marks;
};

void display(struct student*);
void initialize(struct student*);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number of students : ");
    scanf("%d", &num);
    
    struct student *array = (struct student*)malloc(num * sizeof(struct student));

    for (int i = 0; i < num; i++)
        initialize(&array[i]);
    
    for (int i = 0; i < num; i++)
        display(&array[i]);
    
    return 0;
}

void initialize(struct student *s1)
{
    (*s1).name = (char*)malloc(25 * sizeof(char));

    printf("\nEnter name :");
    scanf("%s", (*s1).name);

    printf("Enter roll : ");
    scanf("%d", &(*s1).roll);

    printf("Enter marks : ");
    scanf("%lf", &(*s1).marks);
}

void display(struct student *s1)
{

    printf("\nName is : %s\n", (*s1).name);
    printf("Roll is : %d\n", (*s1).roll);
    printf("Marks are : %lf\n", (*s1).marks);
}
