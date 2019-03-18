#include<iostream>
using namespace std;

class smartPtr
{
    int *ptr;
public:
    explicit smartPtr(int *p = NULL){
	ptr = p;
    }

   ~smartPtr(){
  	delete ptr;
    }

    int &operator *(){
	return *ptr;
    }
};

int main()
{
    smartPtr ptr(new int());
    *ptr = 100;
    cout << *ptr << endl;
    return 0;
}
