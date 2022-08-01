#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void forkExample(){
    int x = 0;
    fork();
    fork();
    if(fork() > 0)
    {
        printf("Parent Created: %d\n", ++x);
    }
    else 
    {
        printf("Child Created: %d\n", --x);
    }
}

void main()
{
    fork();
    forkExample();
}