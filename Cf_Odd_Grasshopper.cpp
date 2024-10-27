// Odd Grasshopper

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long d;

        if (n % 4 == 0)
        {
            d = 0;
        }
        else if (n % 4 == 1)
        {
            d = -n;
        }
        else if (n % 4 == 2)
        {
            d = 1;
        }
        else if (n % 4 == 3)
        {
            d = n + 1;
        }

        if (x % 2 == 0)
        {
            cout << x + d << endl;
        }
        else
        {
            cout << x - d << endl;
        }
    }

    return 0;
}
