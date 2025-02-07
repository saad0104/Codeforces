// Remove Smallest

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            vc.push_back(q);
        }
        sort(vc.begin(), vc.end());
        bool fr = false;

        for (int i = 1; i < n; i++)
        {
            if ((vc[i] - vc[i - 1]) > 1)
            {
                fr = true;
                break;
            }
        }

        if (fr == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
