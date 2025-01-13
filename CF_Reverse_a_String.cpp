// Reverse a String

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string s = str;
    sort(str.begin(), str.end());

    // cout << str << endl;

    if (s == str)
    {
        cout << "NO" << endl;
    }

    else
    {
        int a, b;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] < s[i - 1])
            {
                a = i;
                b = i + 1;
                break;
            }
        }
        cout << "YES" << endl;
        cout << a << " " << b << endl;
    }

    return 0;
}
