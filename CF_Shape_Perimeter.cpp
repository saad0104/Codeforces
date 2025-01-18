// Shape Perimeter

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long n, m;
        cin >> n >> m;
        long long a, b;
        long long tot = 4 * m * n;
        long long h = n - 1;

        for (long long i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (i != 0)
            {
                tot -= 2 * ((m - a) + (m - b));
            }
        }
        cout << tot << endl;
    }

    return 0;
}
