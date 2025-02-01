// Basketball Together

#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, d;
    cin >> n >> d;

    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    long rem(n), ans(0);

    for (long long i = 0; i < n; i++)
    {
        long long x = a[i];
        long long num = 1 + d / x;
        if (num <= rem)
        {
            rem -= num;
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}
