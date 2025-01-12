// Crafting

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
        vector<int> p, m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            p[i] -= m[i];
        }
        sort(p.begin(), p.end());

        if (p[0] + p[1] >= 0)
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
