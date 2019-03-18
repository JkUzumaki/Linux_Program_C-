#include<iostream>
//WILL CONTINUE LATER

class calculator
{
public:
	int n1, n2;
	int operator*(){
		int temp;
		temp = this->n1 * this->n2;
		return temp;
	}
};

int main()
{
    calculator A;
	int result = 0;
	std::cout << "Enter the num1 and num2\n";
	std::cin >> A.n1 >> A.n2;
	result = A.n1 * A.n2;
	std::cout << "The result " << result << std::endl;
	return 0;
}
