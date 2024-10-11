// AvtoBus

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << endl;
        }
        else if (n < 10)
        {
            cout << n / 4 << " " << n / 4 << endl;
        }
        else
        {
            long long bmax = 0;
            long long bmin = 0;

            if (n % 6 == 0)
            {
                bmin = n / 6;
            }
            else
            {
                bmin = n / 6 + 1;
            }
            bmax = n / 4;

            cout << min(bmin, bmax) << " " << max(bmin, bmax) << endl;
        }
    }

    return 0;
}
