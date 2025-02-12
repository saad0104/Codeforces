// Skibidus and Ohio

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool bl = false;
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i - 1] == str[i])
            {
                bl = true;
                break;
            }
        }
        if (bl == true)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << str.length() << endl;
        }
    }

    return 0;
}
