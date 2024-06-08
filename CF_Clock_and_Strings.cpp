// Clock and Strings

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int m = min(a, b);
        int n = max(a, b);
       
        bool b1=false, b2=false;
        if ((c >= n && c <= 12) || c <= m)
        {
            b1 = true;
        }
        if ((d >= n && d <= 12) || d <= m)
        {
            b2 = true;
        }
        if (b1 == b2)
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
