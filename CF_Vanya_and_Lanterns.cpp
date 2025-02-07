// Vanya and Lanterns

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
    int n, d;
    cin >> n >> d;

    vector<int> vc;
    vector<int> vc2;

    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        vc.push_back(q);
    }
    sort(vc.begin(), vc.end());
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            vc2.push_back(vc[i] - vc[i - 1]);
        }

        double ans = max(max(double(abs(0 - vc[0]) * 1.0), double(abs(d - vc[n - 1]))), double(*max_element(vc2.begin(), vc2.end()) / 2.0));
        cout << setprecision(10) << fixed << ans << endl;
    }
    else
    {
        cout << setprecision(10) << fixed << max(double(abs(0 - vc[0])), double(abs(vc[0] - d))) << endl;
    }
    return 0;
}
