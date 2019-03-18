#include<stdio.h>

int main()
{
    FILE * fr, *fw;
    char ch;
    fr = fopen("p.c","r");
    if(fr == NULL){
	printf("File does not exist\n");
	return 0;
    }else{
	printf("File exist\n");    
    }
    fw = fopen("a.c","w");
    while( (ch = fgetc(fr)) != EOF ){
	fputs(ch, fw);
    }
    //fclose(fr);
    //fclose(fw);
    return 0;
}
