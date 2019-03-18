#include<stdio.h>
int main()
{
    char ch;
    int p[2];
    pipe(p);
    int size = 0;
    int flag = 1;
    while(1){
   	if(write( p[1], &ch, 1)){
            size++;
    printf("Size %d\n",size);
        }else{
	    flag = 0;
	}
    }
    return 0;
}
