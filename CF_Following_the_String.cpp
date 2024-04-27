// Following the String

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str = "abcdefghijklmnopqrstuvwxyz";

        int n;
        cin >> n;
        map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]] = 0;
        }

        vector<int> vc(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];

            for (auto it : mp)
            {
                if (it.second == vc[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
