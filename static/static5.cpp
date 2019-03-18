#include<iostream>

class A
{
	static int var = 0;
	public:
	static void printMsg(int a,int b)
	{
		std::cout << "Welcome to A class" << a+b << std::endl;
	}
};

int main()
{
	int a=2,b=5;
	//A::printMsg();	// <- This is the recommended method
	//A obj;
	A::printMsg(a, b);
}
