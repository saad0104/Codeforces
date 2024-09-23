// Stand-up Comedian

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a != 0)
        {
            long long total = 0;

            total = a + min(b, c) * 2 + min(a + 1, abs(b - c) + d);
            cout << total << endl;
        }

        if (a == 0)
        {
            long long total = 1;
            cout << total << endl;
        }
    }
    return 0;
}
