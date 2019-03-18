#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int front;
int rear;
int *arr = NULL;
int size;
void enqueue()
{
    if(rear==size){
  	cout << "No space in queue\n";
	return;
    }else{
	int data = 0;
	cout << "Enter the data to be enqueued\n";
	cin >> data;
	arr[rear] = data;
	rear++;
	return;
    }
}

void dequeue()
{
    if(front == rear){
	cout << "No element is present\n";
	return;
    } else {
	front++;
	cout << "Element deleted\n";
    }
}

void traverse()
{
   if(front == rear){
	cout << "Queue is empty\n";
	return;
   } else {
	for(int i = front ; i < rear; i++)
	    cout << arr[i] << " ";
  	cout << endl;
   }
}

int main()
{
    cout << "Enter the size for the array\n";
    cin >> size;
    arr = new int[size];
    bool flag = true;
    int choice = 0;
    while(flag){
	cout << "------------------------------------------------------\n";
	cout << "Enter the necessary choice for the stack operation\n";
	cout << "1. To enqueue\n";
	cout << "2. To dequeue\n";
	cout << "3. To Traverse\n";
	cout << "4. To exit\n";
	cin >> choice;
	switch(choice){
	    case 1:
		enqueue();
		break;
	    case 2:
		dequeue();
		break;
	    case 3:
		traverse();
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
