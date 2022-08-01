#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main(){

    int pr = fork();

    if(pr > 0)
    {
        printf(" pr is +ve Parent Process Created!! id = %d\n", getpid());
    }
    else if(pr == 0)
    {
        printf("pr = 0 Child Process created id = %d\n", getpid());
        printf("parent id is ppid= %d\n", getppid());
    }
    else
    {
        printf(" pr is -ve folk not create ");
    }
    printf("this message display twice if folk created \n");
}
