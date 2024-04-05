// Nastia and Nearly Good NUmbers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long m, n;
        cin >> m >> n;
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long x = m * n;
            cout << "YES" << endl;
            cout << m << " " << x << " " << x + m << endl;
        }
    }
    return 0;
}
