// Choosing Cubes

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, fvr, cut;
        cin >> n >> fvr >> cut;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int fvrt = arr[fvr - 1];

        sort(arr + 0, arr + n, greater<int>());

        // cout << arr[n - 1] << endl;
        // cout << fvrt << endl;

        int count = 0;

        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == fvrt)
            {
                vc.push_back(i + 1);
            }
        }
        int no = 0, yes = 0;
        for (int i = 0; i < vc.size(); i++)
        {
            if (vc[i] <= cut)
            {
                no++;
            }
            if (vc[i] > cut)
            {
                yes++;
            }
        }

        if (no > 0 && yes > 0)
        {
            cout << "MAYBE" << endl;
        }

        if (no == 0 && yes > 0)
        {
            cout << "NO" << endl;
        }
        if (no > 0 && yes == 0)
        {
            cout << "YES" << endl;
        }
    }
}
