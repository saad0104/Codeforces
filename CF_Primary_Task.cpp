// Primary task

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool tr = false;
        if (str.size() == 3)
        {
            if (str[0] == '1' && str[1] == '0' && str[2] >= '2')
            {
                tr = true;
            }
        }
        else if (str.size() >= 4)
        {
            if (str[0] == '1' && str[1] == '0' && str[2] >= '1')
            {
                tr = true;
            }
        }

        if (tr == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
