#include<stdio.h>
int main()
{
    printf("%d %d\n",getpid(),getppid()); 
    execlp("ls", "ls", NULL);
    printf("Its Over",getpid(),getppid());
    return 0;
}
