#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    pid_t childpid;
    int status;
    childpid = fork();

    if (childpid == -1)
    {
        printf("Fork error\n");
        return 1;
    }

    else if (childpid == 0)
    {
        printf("I am child, my process ID is : %ld\n", (long)(getpid()));
        sleep(10);
        exit(status);
    }

    else
        printf("I am parent, my process ID is : %ld\n", (long)(getpid()));

    printf("Status : %d\n", status);
    sleep(50);
    wait(NULL);
    return 0;
}