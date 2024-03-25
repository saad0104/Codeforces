//Magical Sticks
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        if (n % 2 == 0)
        {
            ans = n / 2;
        }
        else if (n % 2 != 0)
        {
            ans = (n + 1) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
