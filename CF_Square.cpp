// Square

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int arr[4], brr[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> a >> b;
            arr[i] = a;
            brr[i] = b;
        }

        sort(arr, arr + 4);
        sort(brr, brr + 4);

        cout << (abs(arr[3] - arr[0]) * abs(brr[3] - brr[0])) << endl;
    }

    return 0;
}
