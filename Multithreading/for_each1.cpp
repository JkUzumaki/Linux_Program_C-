#include<iostream>
#include<algorithm>

void add(int c)
{
	std::cout << c + 10 << std::endl;
}

int main()
{
 	int a[5] = {10, 20, 30, 40, 50};
	std::for_each(a, a+5, add);
	return 0;
}
