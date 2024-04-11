// Div 7

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

        if (n % 7 == 0)
        {
            cout << n << endl;
        }

        else
        {
            int x = n - (n % 10);
            for (int i = 0; i <= 9; i++)
            {
                if ((x + i) % 7 == 0)
                {
                    cout << x + i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
