//Good Kid CF

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, result = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        // cout << arr[2];
        
        arr[0] = arr[0] + 1;

        for (int i = 0; i < n; i++)
        {
            result = result * arr[i];
        }
        cout << result << endl;
    }

    return 0;
}
