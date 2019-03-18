#include<iostream>

class Animal
{
	public:
	virtual void fun() = 0;
	void foo(){
		std::cout << "Foo function\n";
	}
};

class Cat: public Animal
{
	public:
	void fun()
	{
		std::cout << "Inside cat fun()" << std::endl;
	}
};

class Dog: public Animal
{
	public:
	void fun()
	{
		std::cout << "Inside Dog fun()" << std::endl;
	}
};

class Pig: public Animal
{
	public:
	void fun()
	{
		std::cout << "Inside Pig fun()" << std::endl;
	}
};

int main()
{
	Animal *obj;
	Cat oCat;
	Dog oDog;
	Pig oPig;
	//Calling a function in the base class
	obj->foo();
	//Inside Cat fun
	obj = &oCat;
	obj->fun();	
	//Inside Dog fun
	obj = &oDog;
	obj->fun();
	//Inside Pig fun
	obj = &oPig;
	obj->fun();
	
	return 0;
}
