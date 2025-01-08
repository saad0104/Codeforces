// Books

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    vector<long long> vc;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vc.push_back(x);
    }

    long long sum = 0;
    long long count = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        sum += vc[i];

        if (sum <= t)
        {
            count++;
        }
        else
        {
            sum -= vc[k];
            k++;
        }
    }
    cout << count << endl;

    return 0;
}
