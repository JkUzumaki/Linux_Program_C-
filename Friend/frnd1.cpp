#include<iostream>

class Distance
{
	int meter;
	friend int addFive(Distance);
public:
	Distance(): meter(0){
		std::cout << "Initial distance " << meter << std::endl;
	}
	//friend int addFive(Distance);
};

int addFive(Distance d)
{
	d.meter += 500;
	return d.meter;
}

int main()
{
	Distance D;
//	int a = addFive(D);
	std::cout << "Distance "<< addFive(D) << std::endl;
	return 0;
}
