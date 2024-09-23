// Pangram

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin >> n;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    string strU = "abcdefghijklmnopqrstuvwxyz";

    bool tr = false;
    for (int i = 0; i < strU.size(); i++)
    {
        auto it = find(str.begin(),
                       str.end(), strU[i]);

        if (it != str.end())
        {
            tr = true;
            continue;
        }
        else
        {
            tr = false;
            break;
        }
    }
    if (tr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
