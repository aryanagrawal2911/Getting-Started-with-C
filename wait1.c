#include "hea.h"

int main(int argc, char const *argv[])
{
    __pid_t chpid[3];
    int status;

    for (int i = 0; i < 2; i++)
    {
        chpid[i] = fork();

        if (chpid[i])
        {
            printf("Parent pid = %d and chpid= %d\n", getpid(), chpid[i]);
        }

        else
        {
            if (i == 0)
            {
                for (int j = 0; i < 100; i++)
                {
                    printf("\tChild_1 pid = %d and chpid = %d\n", getpid(), chpid[i]);
                    sleep(2);
                }
            }

            if (i == 1)
            {
                for (int j = 0; j < 100; j++)
                {
                    printf("\tChild_2 pid = %d and chpid = %d\n", getpid(), chpid[i]);
                    sleep(2);
                }
            }
        }
    }

    waitpid(chpid[0], &status, __W_CONTINUED);
    printf("Parent terminated");
    return 0;
}
