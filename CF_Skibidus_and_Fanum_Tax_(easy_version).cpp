// Skibidus and Fanum Tax (easy version)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        const long long up = INT_MAX;
        long long curr = INT_MIN;

        bool bl = true;

        for (int i = 0; i < n; i++)
        {
            long long tar1 = up;
            if (a[i] >= curr)
                tar1 = a[i];

            long long target = curr + a[i];
            long long tar2 = up;
            auto it = lower_bound(b.begin(), b.end(), target);
            if (it != b.end())
            {
                tar2 = (*it) - a[i];
            }

            long long gg = min(tar1, tar2);
            if (gg == up)
            {
                bl = false;
                break;
            }
            curr = gg;
        }

        if (bl == true)
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
