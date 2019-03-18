#include<iostream>
#include<stdio.h>
int* fun()
{
	static int x = 5;
	return &x;
}

int main()
{
	int *p = fun();
	fflush(stdin);

	std::cout << "*p is " << *p << "\n";
	return 0;
}
