// Grow the Tree

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> vc;
    long long x = 0, y = 0;

    for (long long i = 0; i < n; i++)
    {
        long long r;
        cin >> r;
        vc.push_back(r);
    }

    sort(vc.begin(), vc.end());

    long long mid = vc.size() / 2;
    for (long long i = 0; i < mid; i++)
    {
        y += vc[i];
    }
    for (long long j = mid; j < vc.size(); j++)
    {
        x += vc[j];
    }

    cout << x * x + y * y << endl;
    // cout << x << " " << y << endl;

    return 0;
}





