#include<iostream>

union t
{
	int num;
};
struct ptr
{
	union var;
	int n;
};

int main()
{
	std::cout << "first\n";
	struct ptr *p = new struct ptr;
	std::cout << "sec\n";
	//p->n = 10;
	std::cout << "Enter the data\n";
	std::cin >> p->n;	
	std::cout << "bfr\n";
	std::cout << "The value of n: " << p->n << std::endl;
	std::cout << "aftr\n";
	return 0;
}
