//Boring Apartment

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int l = n.length();
        int m = ((n[0] - '0') * 10) - 10;
        // cout << m << l << n <<endl;
        int k;
        if (l == 1)
        {
            k = 1;
        }
        else if (l == 2)
        {
            k = 3;
        }
        else if (l == 3)
        {
            k = 6;
        }
        else if (l == 4)
        {
            k = 10;
        }

        cout << k + m<<endl;
    }

    return 0;
}
