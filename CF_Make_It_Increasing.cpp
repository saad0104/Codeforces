// Make It Increasing

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        int count = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (vc[i] >= vc[i + 1] && vc[i] > 0)
            {
                vc[i] = vc[i] / 2;
                count++;
            }
            if (vc[i] == vc[i + 1])
            {
                // cout << -1 << endl;
                count = -1;
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
