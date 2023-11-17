#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t childpid = 0;
    int i, n;

    if (argc != 2)
    {
        fprintf(stderr, "Usage : %s processes\n", argv[0]);
        return 1;
    }

    n = atoi(argv[i]);

    for (i = 0; i < n; i++)

        if (childpid == fork())
            break;

    fprintf(stderr, "i : %d\n process ID : %ld\n parent ID : %ld\n child ID : %ld\n", i, (long)(getpid()), (long)(getppid()), (long)(childpid));
}