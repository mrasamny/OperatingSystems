#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    int n;
    int status;

    /* fork a child process */
    pid = fork();

    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork failed");
        return 1;
    }
    else if (pid == 0) { /*child process */
        execlp("/usr/bin/sleep", "sleep", "30",NULL);
    }
    else { /* parent process */
        /* parent will wait for the child to complete */
        //scanf("%d",&n);
        //pid = wait(&status);
        printf("Child Completed with status %d\n",status);
    }

    return 0;
}
