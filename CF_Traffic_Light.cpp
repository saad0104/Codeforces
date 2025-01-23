// Traffic Light

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        string str;
        cin >> n;
        cin >> ch;
        cin >> str;

        string f = str + str;

        if (ch == 'g')
        {
            cout << 0 << endl;
        }

        else
        {
            int locatex = INT32_MIN;
            int locateg = -1;

            for (int i = f.size() - 1; i >= 0; i--)
            {
                if (f[i] == 'g')
                {
                    locateg = i;
                }
                if (f[i] == ch)
                {
                    locatex = max(locatex, locateg - i);
                }
            }
            cout << locatex << endl;
        }
    }
    return 0;
}
