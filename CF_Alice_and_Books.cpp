// Alice and Books

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
        int vc[n];
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        int h = vc[n - 1];
        int x = sizeof(vc) / sizeof(vc[0]);

        int h2 = *max_element(vc, vc + (x - 1));

        cout << h + h2 << endl;
    }
    return 0;
}
