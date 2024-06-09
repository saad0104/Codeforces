// Strange Splitting

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
        long long arr[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string str;

        if (arr[0] == arr[n - 1])
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;

            for (long long i = 0; i < n; i++)
            {
                str[i] = 'R';
                str[1] = 'B';

                cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}
