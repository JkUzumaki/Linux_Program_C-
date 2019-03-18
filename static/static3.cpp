#include<iostream>

class Base
{
public:
	static int i;
	Base(){}
};
int Base::i  = 0;
int main()
{
	Base obj1, obj2;
	obj1.i = 10;
	std::cout << obj1.i << std::endl;
	obj2.i = 30;
	std::cout << obj2.i << std::endl;
	return 0;
}
