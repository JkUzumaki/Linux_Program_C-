#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

class Person
{
	public:
			Person(const char* pN){
				cout << "Constructing " << pN << endl;
				pName = new string(pN);
			}
			~Person(){
				cout << "Destructing " << pName << " (" << *pName << ")" << endl;
				*pName = "already destructed memory";
			}
	protected:
		string *pName;
};

void fn()
{
	Person p1("This_is_a_very_long_name");
	Person p2(p1);
}

int main(){
	cout << "Calling fn() " << endl;
	fn();
	cout << "Back in main() " << endl;
	cout << "Press enter to continue..." << endl;
	cin.ignore(10,  '\n');
	cin.get();
	return 0;
}
