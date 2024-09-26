// Robin Hood in Town

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        vector<long long> vc;

        long long tot = 0;
        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            vc.push_back(a);
            tot += a;
        }
        sort(vc.begin(), vc.end());

        if (n == 1 || n == 2)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << max(0LL, vc[n / 2] * 2 * n - tot + 1) << endl;
        }
    }
    return 0;
}
