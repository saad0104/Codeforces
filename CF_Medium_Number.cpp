// Medium Number

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

        int a, b, c;
        cin >> a >> b >> c;
        vector<int> vc;
        vc.push_back(a);
        vc.push_back(b);
        vc.push_back(c);
        sort(vc.begin(), vc.end());

        cout << vc[1] << endl;
    }

    return 0;
}
