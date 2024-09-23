// Robin Hood and Major Oak

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n, k;
        cin >> n >> k;

        long long out = n - k;
        long long lf = 0;

        lf += (n * (n + 1)) / 2;
        lf -= (out * (out + 1)) / 2;

        if (lf % 2 == 0)
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
