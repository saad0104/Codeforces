// Yogurt Sale

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;
        int tot;
        if (b < 2 * a)
        {
            tot = (n / 2) * b + (n % 2) * a;
        }
        else
        {
            tot = a * n;
        }

        cout << tot << endl;
    }

    return 0;
}
