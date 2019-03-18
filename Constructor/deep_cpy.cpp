#include<iostream>
using namespace std;

class Person
{
public:
	Person(const char *pN){
		cout << "Constructing " << pN << endl;
		pName = new string(pN); 
	}
	Person(Person& person){
		cout << "Copying " << *(person.pName) << endl;
		pName = new string(*person.pName);
	}

	~Person()
	{
		cout << "Destruving " << pName << "(" << *pName << ")" << endl;
		*pName = "already destructed memory";
	}

protected:
	string *pName;
};
void fn()
{
	Person p1("Hello, World!");
	Person p2(p1);
}
int main()
{
	cout << "Calling fn\n";
	fn();
	cout << "Back to main\n";
	return 0;
}
