// Source : Codeforces
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int num = 0;

    int arr[50];

    cin >> n>>k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0 ; i<n;i++){
        if (arr[i] > 0)
        {
            if(arr[i]>=arr[k-1]){
                num++;
            }                
            
        }
    }
    cout << num << endl;
}