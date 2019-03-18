#include<iostream>
using namespace std;

class s_ton
{
    private:
        static s_ton* obj;
    	//s_ton(){}
    public:
//	s_ton(){
	
	s_ton* getInst(){
      	    if(obj == NULL){
                obj = new s_ton;
                cout << "Single object is created" << endl;
            }else{
                cout << "Object is already created, No more creation is possible!"<< endl;
 	    }
            return obj;
	}
};
s_ton* s_ton::obj = NULL;

int main()
{
    s_ton* a;
    a =a->getInst();
    s_ton* b;
    b =b->getInst();   
    return 0;
}
