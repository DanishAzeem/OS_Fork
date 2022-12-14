/* fork/getpid test */
#include <sys/types.h>
#include <unistd.h>     /* fork(), getpid() */
#include <stdio.h>

int main(int argc, char* argv[])
{
    int pid;

    printf("Entry point: my pid is %d, parent pid is %d\n",getpid(), getppid());

    pid = fork();
    if (pid == 0) {
        printf("Child: my pid is %d, parent pid is %d\n", getpid(), getppid());
    }
    else if (pid > 0) {
        printf("Parent: my pid is %d, parent pid is %d, my child pid is %d\n",getpid(), getppid(), pid);
    }
    else {
        printf("Parent: oops! can not create a child (my pid is %d)\n", getpid());
    }
    return 0;
}