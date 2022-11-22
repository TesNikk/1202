#include<iostream>
using namespace std;
class Binary{
private:
int left;
int right;
int data;
public:
void get_data(int left,int right,int data){
    this->left=left;
    this->right=right;
    this->data=data;
}
int search(int a[]){
    int mid;
    while (left <= right) {
		mid = (left + right) / 2;
		if (data == a[mid]) {
			return mid;
		}
		else if (data < a[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}

};

int main() {
	int a[100];
	int n;
	cout << "Enter Array size:" << endl;
	cin >> n;
	cout << "Input Elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Enter data to search" << endl;
	int data;
	cin >> data;
    Binary b;
    int l = 0;
	int r = n - 1;
    b.get_data(l,r,data);
    int result=b.search(a);
	if (result == -1) {
		cout << "Not found" << endl;
	}
	else {
		cout << "found at " << result << endl;
	}
    return 0;
}