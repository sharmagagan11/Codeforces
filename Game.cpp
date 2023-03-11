#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int number=0;
    vector<int> a(n) ,b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i]>>b[i];
        for(int j=0 ; j<n ; j++){
            if(a[i] == b[j]){
                number+=1;

            }
            if(b[i] == a[j]){
                number+=1;
            }
        }
    }
    cout<<number<<endl;
    return 0;
}