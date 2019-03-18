#include<iostream>
#include<thread>

void foo(int Z)
{
	for(int i = 0; i < Z; i++)
		std::cout << "Thread using function pointer as call" << i << std::endl;
}
int main()
{
	std::thread th1(foo,3);
	std::thread th2(foo,2);
	
	th1.join();
	th2.join();
	return 0;
}
