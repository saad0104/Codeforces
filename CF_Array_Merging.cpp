// Array Merging

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

        vector<int> vc1(n);
        vector<int> vc2(n);

        set<int> elements;

        for (int i = 0; i < n; i++)
        {
            cin >> vc1[i];
            elements.insert(vc1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> vc2[i];
            elements.insert(vc2[i]);
        }

        // vector<int> merged = vc1;
        // merged.insert(merged.end(), vc2.begin(), vc2.end());

        map<int, int> mp1, mp2;
        int count = 1;
        mp1[vc1[0]] = 1;

        for (int i = 1; i < n; i++)
        {
            if (vc1[i] == vc1[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            mp1[vc1[i]] = max(mp1[vc1[i]], count);
        }

        mp2[vc2[0]] = 1;
        count = 1;

        for (int i = 1; i < n; i++)
        {
            if (vc2[i] == vc2[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            mp2[vc2[i]] = max(mp2[vc2[i]], count);
        }

        int ans = 1;
        for (auto it : elements)
        {
            ans = max(ans, mp1[it] + mp2[it]);
        }
        cout << ans << endl;
    }
    return 0;
}
