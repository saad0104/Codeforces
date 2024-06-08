// CF Tiles Comeback


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector<int> vc;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // cout << arr[0] << " " << arr[n - 1];

        if (arr[0] == arr[n - 1])
        {
            int count = 0;
            int s = arr[0];
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == s)
                {
                    count++;
                }
            }
            // cout << count << endl;
            if (count >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        if (arr[0] != arr[n - 1])
        {
            int f = arr[0];
            int l = arr[n - 1];
            int countF = 0, countL = 0;
            int newIdx;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == f)
                {
                    countF++;
                }
                if (countF == k)
                {
                    newIdx = i;
                    break;
                }
            }
            if (countF < k)
            {
                cout << "NO" << endl;
            }
            else
            {

                for (int i = n - 1; i >= newIdx; i--)
                {
                    if (arr[i] == l)
                    {
                        countL++;
                    }
                }

                if (countF >= k && countL >= k)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
