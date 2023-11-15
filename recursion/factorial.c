#include <stdio.h>

int factorial(int n)
{

    if (n < 2)
        return 1;

    return (n * factorial(n - 1));
}

int main(int argc, char const *argv[])
{

    int n;
    printf("Enter any non-negative integer : ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, factorial(n));

    return 0;
}
