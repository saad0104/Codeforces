// Dragons

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> vc;
    bool fl = false;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vc.push_back(make_pair(x, y));
    }
    sort(vc.begin(), vc.end());

    for (auto it : vc)
    {
        if (s > it.first)
        {
            s += it.second;
        }
        else
        {
            fl = true;
            break;
        }
    }

    if (fl == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
