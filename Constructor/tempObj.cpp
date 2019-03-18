#include<iostream>
using namespace std;
class Student
{
    public:
        //Parameterised Constructor
        Student(const char* pName = "No Name", int ssId = 0)
        :name (pName), id(ssId){
            cout << "Constructed " << name << endl;
        }
        //COPY CONSTRUCTOR
        Student(const Student &s): name("Copy of " + s.name), id(s.id){
            cout << "Constructed " << name << endl;
        }
        
        ~Student(){
            cout << "Destructing " << name << endl;
        }
    protected:
        string name;
        int id;
};

Student fn1();
int fn2(Student&);
int main()
{
    int x;
    x = 3 * fn2(fn1()) + 10;

    return 0;
}
