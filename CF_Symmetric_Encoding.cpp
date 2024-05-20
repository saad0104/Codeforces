// Symmetric Encoding

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;

        string r = s;
        // cout << r << endl;

        vector<char> vc;
        stringstream ss(s);
        char w;

        while (ss >> w)
        {
            vc.push_back(w);
        }

        sort(vc.begin(), vc.end());

        auto it = unique(vc.begin(), vc.end());
        vc.erase(it, vc.end());

        int sz = vc.size() - 1;
        for (int j = 0; j < r.size(); j++)
        {

            for (int i = 0; i < vc.size(); i++)
            {

                if (r[j] == vc[i])
                {
                    // cout << r[j] << " " << vc[i] << " " << sz-i << vc[sz - i] << endl;
                    cout << vc[sz - i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
