// Ilya and Bank Account

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;

    if (x >= 0)
    {
        cout << x << endl;
    }

    else if (x < 0)
    {

        long long y, z;
        y = x / 10;

        z = (y - (y % 10)) + (x % 10);

        if (y > z)
        {
            cout << y << endl;
        }

        else
        {
            cout << z << endl;
        }
    }

    return 0;
}
