// Barrels

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> vc;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vc.push_back(x);
        }

        sort(vc.begin(), vc.end());
        long long h = n - 1;
        long long sum = vc[h];
        h--;

        while (k > 0)
        {
            sum += vc[h];
            vc[h] = 0;
            h--;
            k--;
        }
        // sort(vc.begin(), vc.end());

        cout << sum << endl;
    }

    return 0;
}
