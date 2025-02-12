// Odd Divisor

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

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        while (n % 2 == 0)
        {
            n /= 2;
        }

        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
