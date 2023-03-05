#include<iostream>
using namespace std;

int main(){
    int n,step;
    cin>>n;
    step=n/5;

    if(n%5==0){
        cout<<step<<endl;
    }else{
        cout<<step+1<<endl;
    }
    return 0;
}