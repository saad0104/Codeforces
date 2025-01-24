// Buying Torches

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long step = (k * y + k - 1) / (x - 1);

        long long req = k * y + k - 1;

        if ((step * (x - 1)) >= req)
        {
            cout << step + k << endl;
        }
        else
        {
            cout << step + k + 1 << endl;
        }
    }
    return 0;
}
