#include<iostream>
#include<fstream>
//#include<ifstream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    fstream fout;
    sring line;
    fout.open("text.txt");
    
    while(fout){
        getline(cin, line);
        
        if(line == "-1")
            break;
            
        fout << line << endl;
    }
    
    fout.close();
    
    fstream fin;
    
    fin.open("text.txt");
    while(fin){
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
    return 0;
}
