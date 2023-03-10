#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < 97)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    // for checking upper case letter
    if (upper > lower)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 97)
            {
                if (str[i] = str[i] - 32)
                    ;
            }
        }
    }
    else
    {
        // for checking lower case letter
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] < 97)
            {
                if (str[i] = str[i] + 32)
                    ;
            }
        }
    }
    cout << str << endl;
    return 0;
}