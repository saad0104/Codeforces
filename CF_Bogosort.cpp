// Bogosort

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

        sort(vc.begin(), vc.end());
        reverse(vc.begin(), vc.end());

        for (int i = 0; i < n; i++)
        {
            cout << vc[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
