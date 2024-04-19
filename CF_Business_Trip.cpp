//Business Trip

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int x = 0;

    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        x += arr[i];
    }

    if (k == 0)
    {
        cout << "0" << endl;
    }

    else if (k > x)
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(arr, arr + 12);
        int sum = 0;
        int count = 0;
        if (k > 0)
        {
            for (int i = 11; i >= 0; i--)
            {
                sum += arr[i];
                count++;

                if (sum >= k)
                {
                    cout << count << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
