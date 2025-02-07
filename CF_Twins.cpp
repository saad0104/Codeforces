// Twins

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int sum(vector<int> arr, int start, int end)
{
    int sm = 0;

    for (int i = start; i <= end; i++)
    {
        sm += arr[i];
    }
    return sm;
}
int main()
{
    fastio();
    int n;
    cin >> n;

    vector<int> vc;

    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        vc.push_back(q);
    }
    sort(vc.begin(), vc.end());
    int i = n - 1;
    int count = 0;
    // cout << sum(vc, 0, i) << " " << sum(vc, i + 1, n - 1) << endl;
    // i--;
    // cout << sum(vc, 0, i) << " " << sum(vc, i + 1, n - 1) << endl;
    // i--;
    // cout << sum(vc, 0, i) << " " << sum(vc, i + 1, n - 1) << endl;

    while (sum(vc, 0, i) >= sum(vc, i + 1, n - 1))
    {
        i--;
        count++;
    }
    cout << count << endl;

    return 0;
}
