#include<iostream>

int main()
{
	int  *ptr = new int;
	delete ptr;
	ptr = NULL;
	return 0;
}
