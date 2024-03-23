//Increasing

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x];

        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + x);

        int br = 0;
        for (int j = 0; j < x - 1; j++)
        {
            if (arr[j] == arr[j + 1])
            {
                br++;
            }
        }

        if (br > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
