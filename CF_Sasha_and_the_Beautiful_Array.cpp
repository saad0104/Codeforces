// Sasha and Beautiful Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + (arr[i + 1] - arr[i]);
        }

        cout << sum << endl;
    }
    return 0;
}
