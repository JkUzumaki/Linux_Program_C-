#include<iostream>
class Base1
{
	public:
		Base1()
		{
			std::cout << "Inside Base 1 class\n";
		}
		virtual void display()
		{
			std::cout << "Inside base1 display\n";
		}
		virtual void display1()
		{
			std::cout << "Inside Base1 display1\n";
		}
};
class Base2: public Base1
{
	public:
		Base2()
		{
			std::cout << "Inside Base 2 class\n";
		}
};
class derived: public Base2
{
	public:
		derived()
		{
			std::cout << "Inside derived class\n";
		}
};

class empty		
{
	public:
		empty()
		{
			std::cout << "Inside the empty class\n";
		}
};

int main()
{
	derived obj;
	std::cout << "The size of derived object : " << sizeof(obj) << std::endl;
	/*Base1 obj1;
	std::cout << "The size of Base1 object : " << sizeof(obj1) << std::endl;
	Base2 obj2;
	std::cout << "The size of Base2 object : " << sizeof(obj2) << std::endl;
	*/empty obj3;
	std::cout << "The size of empty object : " << sizeof(obj3) << std::endl;

	return 0;
}
