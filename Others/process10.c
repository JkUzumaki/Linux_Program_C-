#include<stdio.h>
#include<string.h>
int main()
{
    int p[2];
    pipe(p);
    char str[30];
    if( fork() ){
	printf("Parent process\n");
	printf("Waiting for read data\n");
	read(p[0], str, 5);
	puts("Back to Parent\n");
	puts (str);
    } else {
	puts("Child Process\n");
	printf("Enter the key \"Child\"\n");
	gets(str);
	write( p[1], str, strlen(str) );
    }
    return 0;
}
