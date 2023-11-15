#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char *name;
    int roll;
    double marks;
} student;

void display(student *);
void initialize(student *);
void bublsort(student *, int, int);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number of students : ");
    scanf("%d", &num);

    student *array = (student *)malloc(num * sizeof(student));

    for (int i = 0; i < num; i++)
        initialize(&array[i]);

    student *copyarray;
    for (int i = 0; i < num; i++)
        copyarray[i] = array[i];

    bublsort(copyarray, num, 1);

    printf("\nBefor Sorting ...\n");
    for (int i = 0; i < num; i++)
        display(&array[i]);

    printf("\nAfter Sorting ...\n");
    for (int i = 0; i < num; i++)
        display(&copyarray[i]);

    return 0;
}

void initialize(student *s1)
{
    (*s1).name = (char *)malloc(25 * sizeof(char));

    printf("\nEnter name :\n");
    scanf(" %s", (*s1).name);
    scanf(" %s", (*s1).name);

    printf("Enter roll : ");
    scanf("%d", &(*s1).roll);

    printf("Enter marks : ");
    scanf("%lf", &(*s1).marks);
}

void bublsort(student *copyarray, int n, int para)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (para == 1)
            {

                if (strcmp(copyarray[j].name, copyarray[j + 1].name) > 0)
                {

                    student temp;

                    temp = copyarray[j];
                    copyarray[j] = copyarray[j + 1];
                    copyarray[j + 1] = temp;
                }
            }

            else if (para == 2)
            {

                if (copyarray[j].roll > copyarray[j + 1].roll)
                {

                    student temp;

                    temp = copyarray[j];
                    copyarray[j] = copyarray[j + 1];
                    copyarray[j + 1] = temp;
                }
            }

            else if (para == 3)
            {

                if (copyarray[j].marks > copyarray[j + 1].marks)
                {

                    student temp;

                    temp = copyarray[j];
                    copyarray[j] = copyarray[j + 1];
                    copyarray[j + 1] = temp;
                }
            }
        }
    }
}

void display(student *s1)
{

    printf("\nName is : %s\n", (*s1).name);
    printf("Roll is : %d\n", (*s1).roll);
    printf("Marks are : %lf\n", (*s1).marks);
}