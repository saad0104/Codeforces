// Football

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1] && str[i] == str[i + 2] && str[i] == str[i + 3] && str[i] == str[i + 4] && str[i] == str[i + 5] && str[i] == str[i + 6])
        {
            count = 1;
        }
    }

    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
