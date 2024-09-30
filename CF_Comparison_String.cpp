// Comparison String

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int gr = 1;
        int ls = 1;
        int countgr = 1, countls = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '<' && str[i + 1] == '<')
            {
                countgr++;
            }
            else
            {
                countgr = 1;
            }
            gr = max(gr, countgr);
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '>' && str[i + 1] == '>')
            {
                countls++;
            }
            else
            {
                countls = 1;
            }
            ls = max(ls, countls);
        }

        cout << max(ls, gr) + 1 << endl;
    }

    return 0;
}
