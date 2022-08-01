#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

void main()
{
    for(int i=1;i<10;i++)
    {
        fork();
    }
}