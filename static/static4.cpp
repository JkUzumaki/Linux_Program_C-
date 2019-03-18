#include<iostream>

class A
{
int i;
public:
	A()
	{
		i = 0;
		std::cout << "Inside consructor\n";
	}
	~A()
	{
		std::cout << "Inside destructor\n";
	}
};

int main()
{
	int x = 0;
	if(x == 0)
		static A obj;
	std::cout << "End of main\n";
	return 0;
}
