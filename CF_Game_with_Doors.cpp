// Games with Doors

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        if (l == L && r == R)
        {
            cout << r - l << endl;
        }
        
        else if (l > R || L > r)
        {
            cout << "1" << endl;
        }

        else
        {
            int LL = max(l, L);
            int HH = min(r, R);
            int LH = HH - LL + 2;
            if (l == L)
            {
                LH--;
            }
            if (r == R)
            {
                LH--;
            }
            cout << LH << endl;
        }
    }

    return 0;
}
