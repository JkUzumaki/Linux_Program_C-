#include<stdio.h>

int main()
{
    printf("%d %d\n",getpid(), getppid());
    int i = 5;
    if(fork()){
 	i = i + 1;
      	printf("%d\n",i);
    }else{
	printf("%d\n",i);
	i = i + 1;
    }
    return 0;
}
