// AB Balance

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        int n = st.length();

        if (st[n - 1] == st[0])
        {
            cout << st << endl;
        }
        else
        {
            if (st[n - 1] == 'a')
            {
                st[n-1] = 'b';
            }
            else
            {
                st[n - 1] = 'a';
            }
            cout << st << endl;
        }
    }

    return 0;
}
