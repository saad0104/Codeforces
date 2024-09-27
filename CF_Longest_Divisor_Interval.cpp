// Longest_Divisor_Interval

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

        long long x = 1;

        while (x++)
        {
            if (n % x != 0)
            {
                break;
            }
        }
        cout << x - 1 << endl;
    }
    return 0;
}
