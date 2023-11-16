# include <stdio.h>
# include <unistd.h>

// int main(int argc, char const *argv[])
// {
//     int x = 0;
//     fork();
//     x = 1;
//     printf("I am process %ld and my x is %d and my parent is %ld\n", (long)(getpid()), x, (long)(getppid()));
    
//     return 0;
// }

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; i++)
    {
        fork();
    }
    printf("Hello\n");
    return 0;
}
