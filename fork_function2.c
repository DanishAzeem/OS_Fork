#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

void forkExample(){

    int x = 1;
    if(fork()==0){
        printf("child process called x = %d\n", ++x);
    }
    else{
        printf("parent process called %d\n", --x);
    }
}

void main()
{
    forkExample();

}