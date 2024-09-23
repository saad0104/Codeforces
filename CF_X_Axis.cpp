// X Axis

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> vc;
        vc.push_back(a);
        vc.push_back(b);
        vc.push_back(c);
        sort(vc.begin(), vc.end());
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += abs(vc[i] - vc[i + 1]);
        }

        cout << sum << endl;
    }
    return 0;
}
