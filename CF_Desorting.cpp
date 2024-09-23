// Desorting

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
        int gap = 1e9;
        bool tr = true;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vc.push_back(k);
            if (i > 0)
            {
                gap = min((vc[i] - vc[i - 1]), gap);

                if (vc[i] < vc[i - 1])
                {
                    tr = false;
                }
            }
        }

        if (tr == false)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ((gap / 2) + 1) << endl;
        }
    }

    return 0;
}
