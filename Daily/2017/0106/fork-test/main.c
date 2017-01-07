#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t fpid;
    unsigned int count = 0;

    fpid = fork();

    if (fpid < 0)
    {
        printf("Error in fork(): return value < 0.\n");
        exit(EXIT_FAILURE);
    }
    else if (fpid > 0)
    {
        printf("I am the parent process, my process id is %d\n", getpid());
        count++;
    }
    else // fpid == 0
    {
        printf("I am the child process,  my process id is %d\n", getpid());
        count++;
    }

    printf("count: %d\n", count);

    return 0;
}
