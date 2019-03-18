#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[20];
	int i;
	for(i = 0; i < 2 ; i++){
		std::cin >> str;
		std::cout << str << "\n";
		fflush(stdin);
	}
	return 0;
}
