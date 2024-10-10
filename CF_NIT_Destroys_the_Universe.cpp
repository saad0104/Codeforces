// NIT Drstroys the Universe 

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
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        while (vc.size() > 0 && vc[0] == 0)
        {
            vc.erase(vc.begin());
        }
        while (vc.size() > 0 && vc[vc.size() - 1] == 0)
        {                       
            vc.pop_back();
        }
        for (int i = 0; i < vc.size(); i++)
        {
            if (vc[i] == 0)
            {
                z++;
            }
        }

        if (vc.size() == 0)
        {
            cout << 0 << endl;
        }
        else if (z != 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
