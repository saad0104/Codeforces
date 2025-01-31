// Sorted Adjacent Differences

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    long long n;
    cin >> n;

    vector<long long> vc;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vc.push_back(x);
    }

    sort(vc.begin(), vc.end());

    long long mid = vc.size() / 2;

    if (vc.size() % 2 == 0)
    {
        long long l = mid - 1, u = mid;

        while (u < vc.size())
        {
            if (l >= 0)
            {
                cout << vc[u] << " " << vc[l] << " ";
            }
            l--;
            u++;
        }
        cout << endl;
    }
    else
    {
        long long l = mid - 1, u = mid + 1;
        cout << vc[mid] << " ";
        while (u < vc.size())
        {
            if (l >= 0)
            {
                cout << vc[u] << " " << vc[l] << " ";
            }
            l--;
            u++;
        }
        cout << endl;
    }

    }
    return 0;
}
