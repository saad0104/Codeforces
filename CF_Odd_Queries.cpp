// Odd Queries

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> psum(n);

        psum[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            psum[i] = psum[i - 1] + v[i];
        }
        while (q--)
        {
            long long int l, r, k;
            cin >> l >> r >> k;
            long long int sum = 0;
            sum += psum[n - 1] - ((psum[r - 1] + psum[l - 1]) - v[l - 1]);
            sum += (r - l + 1) * k;
            if (sum % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
