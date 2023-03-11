#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,n;
    cin>>a;
    if(a%2==0){
        n =a/2;
        cout<<n<<endl;
    }
    else{
        n = ((a+1)/2) *(-1);
        cout<<n<<endl;
    }
    return 0;
}