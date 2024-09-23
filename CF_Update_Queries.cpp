// Updated Queries

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        vector<char> vc1, vc2;
        vector<int> vci;

        for (int i = 0; i < a; i++)
        {
            char c;
            cin >> c;
            vc1.push_back(c);
        }
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            vci.push_back(x);
        }
        for (int i = 0; i < b; i++)
        {
            char ch;
            cin >> ch;
            vc2.push_back(ch);
        }

        sort(vci.begin(), vci.end());
        sort(vc2.begin(), vc2.end());

        vci.resize(unique(vci.begin(), vci.end()) - vci.begin());

        int sz = vci.size();

        vc2.resize(sz);

        // cout << vc2.size();

        for (int i = 0; i < vci.size(); i++)
        {
            vc1[vci[i] - 1] = vc2[i];
            // cout << vci[i];
        }
        // cout << endl;
        // for (int i = 0; i < vci.size(); i++)
        // {
        //     cout << vc2[i];
        // }

        for (auto it : vc1)
        {
            cout << it;
        }
        cout << endl;

    }
    return 0;
}
