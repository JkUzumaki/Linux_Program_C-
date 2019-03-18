#include<iostream>

union t
{
	char str[10];
};
struct ptr
{
	t var;
	int n;
};

int main()
{
	struct ptr *p = new struct ptr();
	std::cout << "Enter the data\n";
	std::cin >> p->n;
	std::cout << "The value of n: " << p->n << std::endl;
	//getchar();
	std::cout << "Enter the value for the union\n";
	std::cin >> p->var.str;
	int val = 0;
	val = reinterpret_cast <int> (p->var.str);
	std::cout << "val = " << val << std::endl;
	std::cout << "union " << p->var.str << std::endl;
	return 0;
}
