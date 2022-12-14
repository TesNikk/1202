#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		next = NULL;
	}

};
class Stack {
private:
	Node* top;
public:
	Stack() {
		top = NULL;
	}
	//push
	void push();
	//pop
	int pop();
	//display
	void display();
};
void Stack::push() {
    int x;
    cout<<"Enter ELement"<<endl;
    cin>>x;
	Node* temp = new Node(x);
	if (temp != NULL) {
		temp->next = top;
		top = temp;
	}
	else {
		cout << "stack is overflowed" << endl;
	}

}
int Stack::pop() {
	int x = -1;
	if (top != NULL) {
		Node* temp = top;
		x = temp->data;
		top = temp->next;
		delete temp;
		return x;
	}
	else {
		cout << "Stack is empty" << endl;
	}
}
void Stack::display() {
	Node* temp = top;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void menu(){
    cout<<"Enter Options"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
}
int main() {
    Stack s;
		int opt=1;
    while(opt!=4){
        menu();
        cin>>opt;
        switch(opt)
        {
            case 1:s.push();
            break;
            case 2:s.pop();
            break;
            case 3:s.display();
            break;
            case 4:
            break;
            default:
            cout<<"Invalid Input"<<endl;
        }
    }
    return 0;

}