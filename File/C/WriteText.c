#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	FILE *fptr;
	fptr = fopen("Test.txt", "w");
	
	if(fptr == NULL){
		printf("ERROR!");
		exit(1);
	}
	
	printf("Enter num:\n");
	scanf("%d", &num);
	
	fprintf(fptr, "%d", num);
	fclose(fptr);

	return 0;
}
