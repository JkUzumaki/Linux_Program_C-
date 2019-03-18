#include<iostream>
#include<thread>

void hello()
{
	for(int i = 0; i < 10; i++);
	std::cout << "Hello World!\n";
}

int main()
{
	std::thread t1(hello);
	//t1(hello);
	t1.detach();
	return 0;
}
