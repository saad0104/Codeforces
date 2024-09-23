// Diagonals

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
        int x = n;
        int count = 0;
        while (k > 0 && x > 0)
        {
            if (x == n)
            {
                k = (k - x);
                count++;
            }
            else
            {
                k = (k - x);
                count++;
                if (k > 0)
                {
                    k = (k - x);
                    count++;
                }
            }
            x--;
        }
        cout << count << endl;
    }

    return 0;
}
