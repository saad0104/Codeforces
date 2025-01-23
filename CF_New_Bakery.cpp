// New Bakery

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        long long profit;

        if (a >= b)
        {
            profit = n * a;
        }
        else
        {
            long long dif = b - a;
            long long mx = b;
            long long mn = min(n, dif);
            long long aa = mx - mn + 1;
            long long nn = mx - aa + 1;

            long long offer = (nn * (2 * aa + (nn - 1))) / 2;

            profit = offer + (n - mn) * a;
        }
        cout << profit << endl;
    }

    return 0;
}
