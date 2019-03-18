#include<stdio.h>

int main()
{
    printf("%d %d\n",getpid(),getppid());
    system("ls");
    printf("%d %d\n",getpid(),getppid());
}
