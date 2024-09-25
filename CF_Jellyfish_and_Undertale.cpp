// Jellyfish and Undertale

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        long long arr[n];
        long long count = b;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            count += min(a - 1, arr[i]);
        }

        cout << count << endl;
    }

    return 0;
}
