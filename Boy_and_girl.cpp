#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    int n= str.size();
    sort(str.begin(),str.end());
    for(int i =0 ; i<n;i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }

    if(count%2 == 2){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
