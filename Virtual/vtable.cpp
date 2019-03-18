#include<iostream>

class Base
{
public:
	virtual void fun1()
	{
		std::cout << "Base::fun1\n";
	}
	virtual void fun2()
	{
		std::cout << "Base::fun2\n";
	}
};

class D1: public Base
{
public:
	void fun1()
	{
		std::cout << "D1:fun1\n";
	}
};

class D2: public Base
{
public:
	void fun2()
	{
		std::cout << "D2:fun2\n";
	}
};

int main()
{
	Base *d1;
	D1 o;
	D2 o1;
	//Base
	std::cout << "Inside Base class\n";
	//d1->fun1();
	//d1->fun2();
	//Derived D1
	std::cout << "Inside D1 class\n";
	d1 = &o;
	d1->fun1();
	d1->fun2();
	
	//Derived D2
	std::cout << "Inside D2 class\n";
	d1 = &o1;
	d1->fun1();
	d1->fun2();	
	return 0;
}
