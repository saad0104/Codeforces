//ICPC Ballons

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, bln = 0;
        cin >> n;
        char prb[n];
        for (int i = 0; i < n; i++)
        {
            cin >> prb[i];
        }

        sort(prb, prb + n);

        for (int i = 0; i < n; i++)
        {

            if (prb[i] == prb[i - 1])
            {
                bln = bln + 1;
            }
            else
            {
                bln = bln + 2;
            }
        }
        cout << bln << endl;
    }
    return 0;
}
