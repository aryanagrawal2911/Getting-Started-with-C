#include <stdio.h>

int main(int argc, char const *argv[])
{
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Hello pid : %ld\n", (long)(getpid()));
    //     fork();
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     if(fork() || fork());
    
    // }
    // printf("Hello pid : %ld\n", (long)(getpid()));

    // for (int i = 0; i < 3; i++)
    // {
        
    
    // }
    if(fork() || fork() && fork());
    printf("Hello pid : %ld parent : %ld\n", (long)(getpid()), (long)(getppid()));
}
