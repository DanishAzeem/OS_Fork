#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h> 
void main()
{
    int val;
    val = fork();
    printf("%d\n", val);
}