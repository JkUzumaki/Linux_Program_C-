#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	FILE *fptr;
	
	if( (fptr = fopen("Test.txt", "r")) == NULL ){
		printf("Error, File o be read is not available!\n");
		return 1;
	}	
	fscanf(fptr, "%d", &num);
	printf("Value of n = %d\n", num);
	fclose(fptr);

	return 0;
}
