#include <stdio.h>

void decreasing(int n)
{

    if (n == 0)
        return;

    printf("%d ", n);

    decreasing(n - 1);
}

void increasing(int n)
{

    if (n == 0)
        return;

    increasing(n - 1);

    printf("%d ", n);
}

int main(int argc, char const *argv[])
{

    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("\n");
    increasing(n);

    printf("\n");
    decreasing(n);
    printf("\n");

    return 0;
}
