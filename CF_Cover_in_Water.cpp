// Cover in Water

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

        int n;
        cin >> n;

        string str;
        cin >> str;

        int hash = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '#')
            {
                hash++;
            }
        }
        int c2 = 0;
        for (int i = 0; i < n;)
        {
            if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
            {
                c2 += 2;
                i += 3;
                break;
            }
            else
            {
                i++;
            }
        }

        if (c2 == 0)
        {
            cout << str.size() - hash << endl;
        }
        else
        {
            cout << c2 << endl;
        }
    }
    return 0;
}
