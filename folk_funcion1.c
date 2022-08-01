#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

void forkExample(){
    if(fork()==0){
        printf("child process called\n");
    }
    else{
        printf("parent process called\n");
    }
}

void main()
{
    forkExample();

}