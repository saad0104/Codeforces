// Different String

#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str1;

        cin >> str1;
        int k = str1.size();

        bool tr = false;

        for (int i = 1; i < k; i++)
        {
            if (str1[0] != str1[i])
            {
                tr = true;
                swap(str1[0], str1[i]);
                break;
            }
        }

        if (tr)
        {
            cout << "YES" << endl;
            cout << str1 << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}
