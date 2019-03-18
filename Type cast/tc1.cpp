#include<iostream>
#include<typeinfo>
/*int main(){
    float a;
 //   std::cout << typeid(a).name() << "\n";
 //std::cout << __cplusplus << std::endl;   
 return 0;
}*/
// class type-casting
#include <iostream>
using namespace std;

class CDummy {
    float i,j;
};

class CAddition {
	int x,y;
  public:
   
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

int main () {
  CDummy d;
  CAddition * padd = new CAddition(10,1);
  //Explicity conversion
  padd = (CAddition*) &d;
  cout << padd->result()<<endl;
  return 0;
}
