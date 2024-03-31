//Two Elevators

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        int a1 = (a - 1);
        int a2;
        int b1;
        int b2;
        if (b < c)
        {
            b1 = (c - b);
            a2 = (c - 1) + b1;
        }
        else if (b > c)
        {
            b2 = (b - c);
            a2 = (c - 1) + b2;
        }

        // cout << a1 << " " << a2 << endl;

        if (a1 > a2)
        {
            cout << "2" << endl;
        }

        else if (a1 < a2)
        {
            cout << "1" << endl;
        }

        else
        {
            cout << "3" << endl;
        }
    }
    return 0;
}
