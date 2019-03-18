#include<iostream>
using namespace std;
int global;
int main()
{
    static int var;
    cout << "global " << global << " " << "static " << var << endl;
    return 0;
}



