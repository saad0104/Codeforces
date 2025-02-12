// Pleasant Pairs

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastio();
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> vc;

        for (long long i = 1; i <= n; i++)
        {
            long long q;
            cin >> q;
            vc.push_back({q, i});
        }

        sort(vc.begin(), vc.end());

        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            for (long long j = i + 1; j < n; j++)
            {
                if (vc[i].first * vc[j].first > 2 * n)
                {
                    break;
                }
                else if (vc[i].first * vc[j].first == vc[i].second + vc[j].second)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
