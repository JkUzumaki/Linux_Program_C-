#include<iostream>

int main()
{
	char *c, a;
	short* s, b;
	long *l, d;
	a = 'a'; b = 1; d = 100;
	c = &a; s = &b; l = &d;
	std::cout << "Address of char " << c << std::endl;
	std::cout << "Address of short " << s <<  std::endl;;
	std::cout << "Address of long " << l <<  std::endl;;
	++c;
	++s;
	++l;
	std::cout << "Inc Address of char " << c <<  std::endl;;
	std::cout << "Inc Address of short " << s <<  std::endl;;
	std::cout << "Inc Address of long " << l <<  std::endl;;
	return 0;
}
