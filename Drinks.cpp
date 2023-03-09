#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    double result=0.0;
    double sum=0.0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        result = result + a[i];
    }
    sum=(result/n);
    
    cout<<sum<<endl;

}