#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("Test.txt","w");
	if(fp == NULL){
		printf("Test.txt is not present\n");
		return 1;
	}
	printf("Test.txt is pesent\n");
	fclose(fp);
	return 0;
}
