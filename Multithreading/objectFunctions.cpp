#include<iostream>
#include<algorithm>

class Abc
{
public:
	void operator()(int c){
		std::cout << c + 2 << std::endl;
	}
};

int main()
{
	int a[4] = {1, 2, 3, 4};
	Abc obj1;
	std::for_each(a, a+4, obj1);
	return 0;
}
