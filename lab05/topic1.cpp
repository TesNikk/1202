#include<iostream>
using namespace std;
class stack {
private:
	int* arr;
	int size;
	int top;
public:
	stack(int size) {
		this->size = size;
		arr = new int[size];
		top = -1;
	}
	//push
	void push();
	//peek
	int display();
	//delete
	void pop();
};
void stack::push() {
    int element;
    cout<<"Enter Element"<<endl;
    cin>>element;
	if (top < size - 1) {
		top++;
		arr[top] = element;
	}
	else {
		cout << "Stack is overflowed" << endl;
	}
}
int stack::display() {
	if (top >= 0) {
		return arr[top];
	}
	else {
		cout << "Stack is empty" << endl;
	}
}
void stack::pop() {
	if (top >= 0) {
		top--;
	}
	else {
		cout << "Stack is Underflowed" << endl;
	}
}
void menu(){
    cout<<"Enter Options"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
}
int main() {
    cout<<"Enter Stack size "<<endl;
    int size;
    cin>>size;
    stack s(size);
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
            case 3:cout<<s.display()<<endl;
            break;
            case 4:
            break;
            default:
            cout<<"Invalid Input"<<endl;
        }
    }
    return 0;
}