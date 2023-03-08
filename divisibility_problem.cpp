#include<iostream>
using namespace std;
int main(){
    int t;
     long long int a,b;
    cin>>t;
   
    while(t--){
        cin>>a>>b;

        int div=0,plus;

        if(a%b==0){

            cout<<0<<endl;
            continue;
        }
        div = a/b;
        plus=(div+1)*b;
        cout<<(plus-a)<<endl;


    }
}
/*
input =2
      10
      4
output = 2

10%4=2
div = 10/4
plus = 2.5*4
plus 10
plus-a = 10-10



*/