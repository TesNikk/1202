#include<iostream>
using namespace std;
int main(){
    int k=0;
    int Loc=-1;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int x;
    cout<<"Enter the element you wanna search "<<endl;
    cin>>x;
    while(Loc==-1){
        if(a[k]==x){
            Loc=1;
        }else{
        k=k+1;
        }
    }
    cout<<"Location is = "<<k<<endl;
    return 0;
}
//lemme edit
