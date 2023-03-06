//Source : Codeforces
#include<iostream>
using namespace std;

int main(){
    long long int k,n,w,total;
    cin>>k>>n>>w;
    
    total = (w*(k+w*k))/2;
    
    if(total >n){
        int borrow= total-n;
        cout<<borrow<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}