// Subsequence Permutation

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
        vector<char> vc, vc2;

        for (int i = 0; i < n; i++)
        {
            char q;
            cin >> q;
            vc.push_back(q);
        }
        vc2 = vc;

        sort(vc.begin(), vc.end());

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (vc[i] != vc2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
