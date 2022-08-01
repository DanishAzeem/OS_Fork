#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void forkExample()
{
    int p;
    p = fork();
    if(0==p){
        printf("fork() = 0\n");
    }
    else if(p > 0){
        printf("fork() > 0\n");
    }
    else {
        printf("fork() < 0\n");
    }
}

void main()
{
    forkExample();
}