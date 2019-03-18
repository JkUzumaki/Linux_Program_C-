#include<iostream>

class B;
class A
{
private:
	int numA;
	friend int add(A, B);
public:
	A():numA(10){}
};

class B
{
private:
	int numB;
	friend int add(A, B);
public:
	B():numB(20){}
};

int add(A a, B b){
	return (a.numA + b.numB);
}

int main()
{
	A a;
	B b;
	std::cout << "Sum " << add(a,b) << std::endl;;
}
