#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{
    int pid = fork();

    if(pid > 0){
        
        printf("Parent process created!! and id = %d\n", getpid());
    }
    else if(pid==0)
    {
        printf("child process created!! and id = %d\n", getpid());
        printf("And process created!! and id = %d\n", getppid());
    }
    else{
        printf("fail to create fork");
}
     printf("this process run twice if both process created!!");

}