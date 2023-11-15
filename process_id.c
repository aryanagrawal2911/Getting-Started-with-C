#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("pid = %d\n", getpid());
    printf("parentpid = %d\n", getppid());
    while (1)
        ;
    return 0;
}