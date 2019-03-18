#include<cstdlib>
#include <iostream> 
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

void fn(Student copy){
    cout << "In function fn() " << endl;
}

class Tutor{
public:
    Tutor(Student &s): student(s), id(0){
        cout << "Constructing tutor object" << endl;
    }
protected:
    Student student;
    int id;
};

void fn(Tutor tutor){
    cout << "In function fn()" << endl;
}

int main(){
    Student scruffy("Scruffy");
    Tutor tutor(scruffy);
    cout << "Calling fn()" << endl;
    fn(tutor);
    cout << "Back in main()" << endl;
    cout << "Press enter to continue\n";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
    
}

