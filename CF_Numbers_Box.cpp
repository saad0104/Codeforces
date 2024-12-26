// Numbers Box

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<int> vc;

        for (int i = 0; i < (m * n); i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        int mn = 10e9;
        int sum = 0;
        int neg = 0;

        for (int i = 0; i < (m * n); i++)
        {
            if (vc[i] < 0)
            {
                neg++;
            }
            sum += abs(vc[i]);
            mn = min(mn, abs(vc[i]));
        }

        if (neg % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * mn << endl;
        }
    }

    return 0;
}
