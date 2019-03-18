#include<iostream>

class A
{
public:
static int a;
A(){}
};
int A::a = 10;

int main()
{
	A a;
	a.a = 101;
	std::cout << a.a << std::endl;
	return 0;
}

