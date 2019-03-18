#include<iostream>

//Base Class
class shape
{
public:
	shape()
	{}
	//Pure virtual function
	virtual void draw() = 0;
};

//Derived class 1
class square: public shape
{
public:
	void draw(){
		std::cout << "Inside square\n";
	}
};

//Derived class 2
class rectangle: public shape
{
public:
	void draw(){
		std::cout << "Inside rectangle\n";
	}
};

//Derived class 3
class circle: public shape
{
public:
	void draw(){
		std::cout << "Inside circle\n";
	}
};

int main()
{
	//Creating object for all the class
	shape *base;
	square sObj;
	rectangle rObj;
	circle cObj;

	//Calling draw from square
	base = &sObj;
	base->draw();

	//Calling draw from rectangle
	base = &rObj;
	base->draw();

	//Calling draw from circle
	base = &cObj;
	base->draw();

	return 0;
}
