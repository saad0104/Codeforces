// Make A Equal to B

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

        vector<int> vc1;
        vector<int> vc2;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            vc1.push_back(q);
           
            count += q;
        }
        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            vc2.push_back(q);

            count -= q;
        }

        int dif = 0;

        for (int i = 0; i < n; i++)
        {
            if (vc1[i] != vc2[i])
            {
                dif++;
            }
        }

        int ans = min(dif, abs(count) + 1);

        cout << ans << endl;
    }

    return 0;
}

