// Make AP

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1, d2, d3;
        int na, nb, nc;
        bool fin = false;

        // 3 done
        d1 = b - a;
        nc = a + 2 * d1;
        if (nc != 0 && nc % c == 0 && nc >= c)
        {
            fin = true;
        }
        // 1 done
        d2 = c - b;
        na = b - d2;
        if (na != 0 && na % a == 0 && na >= a)
        {
            fin = true;
        }

        // 2 done

        nb = a + (c - a) / 2;
        if (nb != 0 && nb % b == 0 && nb >= b && (c - a) % 2 == 0)
        {
            fin = true;
        }

        if (fin == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
