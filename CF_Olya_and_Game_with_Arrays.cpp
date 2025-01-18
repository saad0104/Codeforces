// Olya and Games with Arrays

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> smallest;
        vector<long long> smallest2;
        for (long long i = 0; i < n; i++)
        {
            long long m;
            cin >> m;
            vector<long long> vc;

            for (long long j = 0; j < m; j++)
            {
                long long x;
                cin >> x;
                vc.push_back(x);
            }
            sort(vc.begin(), vc.end());
            smallest.push_back(vc[0]);
            smallest2.push_back(vc[1]);
        }
        long long ans = 0;
        sort(smallest.begin(), smallest.end());
        sort(smallest2.begin(), smallest2.end());
        ans += smallest[0];

        for (long long i = 1; i < smallest2.size(); i++)
        {
            ans += smallest2[i];
        }
        cout << ans << endl;
    }

    return 0;
}
