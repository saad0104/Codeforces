// Milya and Two Arrays

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        vector<long long> vc1, vc2;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vc1.push_back(x);
        }
        for (long long i = 0; i < n; i++)
        {
            long long y;
            cin >> y;
            vc2.push_back(y);
        }

        sort(vc1.begin(), vc1.end());
        sort(vc2.begin(), vc2.end());

        long long dcount1 = 1, dcount2 = 1;

        for (long long i = 1; i < n; i++)
        {
            if (vc1[i] != vc1[i - 1])
            {
                dcount1++;
            }
        }
        for (long long i = 1; i < n; i++)
        {
            if (vc2[i] != vc2[i - 1])
            {
                dcount2++;
            }
        }
        // cout << dcount1 << " " << dcount2 << endl;

        if (dcount1 + dcount2 >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
