// Only Pluses

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        int f = 5;
        while (f--)
        {
            arr[0] += 1;
            sort(arr, arr + 3);
        }
        cout << arr[0] * arr[1] * arr[2] << endl;
    }
    return 0;
}