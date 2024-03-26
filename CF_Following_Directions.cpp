//Following Directions

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
        char arr[n];
        int x = 0, y = 0;
        int p = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 'R')
            {
                x++;
            }
            if (arr[i] == 'L')
            {
                x--;
            }

            if (arr[i] == 'U')
            {
                y++;
            }
            if (arr[i] == 'D')
            {
                y--;
            }

            if (x == 1 && y == 1)
            {
                p = 1;
            }
        }

        if (p == 0)
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
