#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n <= 2 || n % 2 != 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
