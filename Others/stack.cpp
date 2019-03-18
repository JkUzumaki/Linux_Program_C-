#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int top = 0;
int size;
int *arr = NULL;
class stack
{
    public:
	void push();
	void pop();
	void traverse();
};

void stack:: push(){
   if(top == size){
	cout << "Stack is overflow\n";
	return;   
   }else{
	int data = 0;
	cout << "Enter the data\n";
	cin >> data;
	arr[top] = data;
	top++;
	cout << "Element added\n";
   }     
}

void stack:: pop()
{
    if(top == 0){
	cout << "Stack is underflow\n";
	return;
    }else{
	top--;
	cout << "Element deleted\n";
	return;
    }
}

void stack:: traverse()
{
    if(top == 0){
	cout << "stack is underflow\n";
	return;
    }else{
	for( int i = 0; i < top; i++)
	    cout << arr[i] << " ";
	cout << endl;
	return;
    }
}

int main()
{
    stack obj;
    int choice = 0;
    cout << "Enter the size\n";
    cin >> size;
    arr = new int[size];
    bool flag = true;
    while(flag){
	cout << "------------------------------------------------------\n";
	cout << "Enter the necessary choice for the stack operation\n";
	cout << "1. To push\n";
	cout << "2. To pop\n";
	cout << "3. To display\n";
	cout << "4. To exit\n";
	cin >> choice;
	switch(choice){
	    case 1:
		obj.push();
		break;
	    case 2:
		obj.pop();
		break;
	    case 3:
		obj.traverse();
		break;
	    case 4:
		flag = false;
		break;
	    default:
		cout << "Invalid, choose the correct option\n";
	}
    }
    delete[] arr;
    return 0;
}
