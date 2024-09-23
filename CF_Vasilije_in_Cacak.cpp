// Vasilije in Cacak

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, k, x;
        cin >> n >> k >> x;

        long long sum = 0;

        for (long long i = n; i > (n - k); i--)
        {
            sum += i;
            // cout << i << endl;
        }

        // long long b = n - k + 1;

        // sum = (n - b + 1) * ((b + n) / 2);
        // cout << sum << endl;

        if (x > sum)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long sum2 = 0;
            // for (long long i = 1; i <= k; i++)
            // {
            //     sum2 += i;
            // }
            sum2 = (k * (k + 1)) / 2;

            if (x < sum2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
