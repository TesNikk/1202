#include<iostream>
using namespace std;
class LinearSearch{
private:
int data;
int k;
int Loc;
public:
LinearSearch(){
    k=0;
    Loc=-1;
}
void get_data(int data){
    this->data=data;
}
void search(int a[]){
     while(Loc==-1){
        if(a[k]==data){
            Loc=1;
        }else{
        k=k+1;
        }
    }
    cout<<"Location is = "<<k<<endl;
}

};
int main(){
    int a[10000];
    int n;
    cout<<"Enter Array Size "<<endl;
    cin>>n;
    cout<<"Input Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the element you wanna search "<<endl;
    cin>>x;
    LinearSearch L;
    L.get_data(x);
    L.search(a);
    return 0;
}