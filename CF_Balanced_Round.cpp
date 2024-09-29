// Balanced Round

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        long long arrdif[n] = {0};
        long long x = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= k)
            {
                arrdif[x]++;
            }
            else
            {
                x++;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arrdif[i] << endl;
        // }

        long long len = sizeof(arrdif) / sizeof(arrdif[0]);
        long long max = *max_element(arrdif, arrdif + len);
        cout << (n - (max + 1)) << endl;
    }

    return 0;
}
