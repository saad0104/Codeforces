// Advantage

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long long arr[n];
        long long str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            str[i] = arr[i];
        }

        sort(str, str + n);

        int m = str[n - 1];
        int k = str[n - 2];
        // cout << m << k;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == m)
            {
                arr[i] = m - k;
            }
            else
            {
                arr[i] = arr[i] - m;
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
