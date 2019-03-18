#include<iostream>
using namespace std;

template <class T>
class SPtr{
    T *ptr;
public:
    explicit SPtr(T *p = NULL){
	cout << "Constructor\n";
        ptr = p;
    }

    ~SPtr(){
   	delete ptr;
	cout << "Memory deleted" << endl;
    }

    T& operator* (){
  	return *ptr;
    }

    T* operator-> (){
	return ptr;
    }
};

int main()
{
    SPtr<char> ptr(new char());
    *ptr = "Hello World!";
    cout << *ptr << endl;
    return 0;
}
