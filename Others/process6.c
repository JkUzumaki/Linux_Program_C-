#include<stdio.h>
void function(){
    printf("Inside the function\n");
    return;
}
int main()
{
     printf("%d %d\n",getpid(),getppid());
    if(fork()){
	 printf("PARENT %d %d\n",getpid(),getppid());
    }else{
	 printf("CHILD %d %d\n",getpid(),getppid());
    }
    printf("afte fork function\n");
    function();
    printf("exit\n");
    return 0;
}
