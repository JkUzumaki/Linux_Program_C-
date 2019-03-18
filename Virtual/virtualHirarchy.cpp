#include<iostream>
//NOTE:
/*
	1. The number of virtual function inside a class does not increase the size of the class
	2. if n number of class are are combined (multiple) inheritance then in such cases the size of class will increase
*/
class Vehicle
{
public:
	Vehicle()
	{
		std::cout << "Inside Vehicle\n";
	}
	virtual void speed() {}
	virtual void tyre() {}
};

class MediumVehicle: public Vehicle
{
public:
	MediumVehicle()
	{
		std::cout << "Inside MediumVehicle\n";
	}
	void speed()
	{
		std::cout << "MediumVehicle speed function\n";
	}
	void tyre()
	{
		std::cout << "Inside MediumVehicle\n";
	}
};

class LightVehicle:public Vehicle
{
public:
	LightVehicle()
	{
		std::cout << "Inside LightVehicle\n";
	}
	void speed()
	{
		std::cout << "LightVehicle speed function\n";
	} 
	void tyre()
	{
		std::cout << "Inside tyre of light vehicel\n";
	}
};

class HeavyVehicle:public Vehicle
{
public:
	HeavyVehicle()
	{
		std::cout << "Inside HeavyVehicle\n";
	}
	void speed()
	{
		std::cout << "HeavyVehicle speed function\n";
	}
	//void tyre()
	//{}
};

class Car: public MediumVehicle, public LightVehicle, public HeavyVehicle
{
	public:
		Car()
		{
			std::cout << "Inside car class\n";
		}
		void speed()
		{
		}
};

int main()
{
	Vehicle *obj;
	HeavyVehicle hObj;
	MediumVehicle mObj;
	obj = &hObj;
	obj->speed();
	obj = &mObj;
	obj->speed();
	Car cObj;
	
	std::cout << "The size of the car object " << sizeof(cObj) << std::endl;
	std::cout << "The size of the Vehicle object " << sizeof(obj)	<< std::endl;
	std::cout << "The size of the Heavyvehicle object " << sizeof(hObj) << std::endl;
	std::cout << "The size of the MediumVehicle object " << sizeof(mObj) << std::endl;
	return 0;	
}
