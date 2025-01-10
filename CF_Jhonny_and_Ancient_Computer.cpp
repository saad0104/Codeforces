// Jhonny and Ancient Computer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long counta = 0, countb = 0;

        while (a % 2 == 0)
        {
            a /= 2;
            counta++;
        }
        while (b % 2 == 0)
        {
            b /= 2;
            countb++;
        }

        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            if (counta == countb)
            {
                cout << 0 << endl;
            }
            else
            {
                long long dif = abs(counta - countb);
                cout << (dif / 3) + (dif % 3 != 0) << endl;
            }
        }
    }

    return 0;
}
