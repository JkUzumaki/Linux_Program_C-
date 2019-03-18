#include<stdio.h>
int main()
{
    printf("%d %d\n",getpid(),getppid());
    int i = 5, v;
    if( fork() ){
 	printf("I value: %d\n",i);
 	printf("Before wait\n");
	wait(&v);
	printf("After wait\n");
    	v = v >> 8;
	printf("V Value: %d\n",v);
    }else{
	i = 7;
	printf("I value in else %d\n",i);
	sleep(2);
	i = i +1;
	exit(i);
    }
    return 0;
}
