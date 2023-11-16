# include <stdio.h>
# include <errno.h>
# include <unistd.h>
# include <string.h>

int main(int argc, char const *argv[])
{
    int n = 0;

    while (n < 100){

        errno = n;
        printf("%d\n%s\n", n, strerror(errno));
        // perror("Error");
        
        n++;
    }

    // return 0;


    // int fd = 3;

    // if(close(fd) == -1){

    //     perror("Error");
    //     strerror(errno);

    // }
}
