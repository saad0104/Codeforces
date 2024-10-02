// Permutation Swap

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            k = __gcd(k, abs(i - x));
        }

        cout << k << endl;
    }
    return 0;
}
