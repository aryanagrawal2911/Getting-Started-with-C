#include <stdio.h>

int fibonacci(int n)
{

    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(int argc, char const *argv[])
{

    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;
}