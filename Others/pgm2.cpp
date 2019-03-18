#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Node
{
    public:
	Node *next;
	int Data;
};

class Link: public Node
{
	Node *Head;
    public:
	Link(){
	    Head = NULL;
	}
	void insert_front();
	void insert_end();
	void insert_pos();
	void display();
};

void Link:: display()
{
    cout << "DISPLAY\n";
    cout << "The elements are:\n";
    Node *temp;
    temp = Head;
    if(temp == NULL){
   	cout << "The list is empty\n";
	return;
    }else{
	while(temp->next != NULL)
	{
	    cout << temp->Data << " ";
	    temp = temp->next;
	}
	cout << temp->Data << endl;
    }
}

void Link:: insert_front()
{
    cout << "Insert Front\n";
    Node *temp;
    temp = new Node();
    int info;
    cout << "Enter the data\n";
    cin >> info;
    temp->Data = info;
    temp->next = NULL;

    if(Head == NULL){
    	Head = temp;
    }else{
	temp->next = Head;
	Head = temp;
    }
}

void Link::insert_end()
{
    cout << "Insert End\n";
    Node* last;
    last = new Node();
    int info;
    cout << "Enter the data\n";
    cin >> info;
    last->Data = info;
    last->next = NULL;
    if(Head == NULL){
	Head = last;	
    }else{
	Node* temp = new Node();
	temp = Head;
	while(temp->next != NULL){
	    temp = temp->next;
	}
	temp->next = last;	
    }
}

void Link:: insert_pos()
{
    int pos = 0;
    int count = 0;
    int check = 0;
    int info = 0;
    Node* curr = new Node;
    curr = Head;
    while(curr->next != NULL){
	count += 1;
	curr = curr->next;
    }
    cout << "Enter the position to insert the node\n";
    cin >> pos;
    if(pos >= count){
    	cout << "The position is greater than available index\n";
	return;
    }else{
	// Node to traverse
    	curr = Head;
	cout << "Enter the data to be inserted\n";
	cin >> info;
	// Node to be inserted
	Node *temp = new Node;
	temp->Data = info;
	temp->next = NULL;
	// Node to hold the old data;
	Node *prev = new Node;
	//Traverse Begin
	while(pos > check){
	    prev = curr;
	    curr = curr->next;
	    check++;
	}
	prev->next  = temp;
	temp->next = curr;
    }

}

int main()
{
    Link obj;
    bool flag = true;
    int choice = 0;
    while(flag){
   	cout << "Enter the correct choice\n1.To insert front\n2. To insert at end\n3. To insert at specific position\n4. To exit"<< endl;
	cin >> choice;
	switch(choice 
    }
}
