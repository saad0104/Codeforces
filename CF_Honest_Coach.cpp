// Honest Coach

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
            int g;
            cin >> g;
            vc.push_back(g);
        }

        sort(vc.begin(), vc.end());

        int dif = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            dif = min(dif, vc[i] - vc[i - 1]);
        }
        cout << dif << endl;
    }

    return 0;
}
