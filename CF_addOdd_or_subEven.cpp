// Add Odd or Substract Even

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << "0" << endl;
        }

        else if (y > x)
        {

            if (x % 2 == 0 && y % 2 == 0)
            {
                cout << "2" << endl;
            }

            else if (x % 2 != 0 && y % 2 == 0)
            {
                cout << "1" << endl;
            }

            else if (x % 2 == 0 && y % 2 != 0)
            {
                cout << "1" << endl;
            }

            else if (x % 2 != 0 && y % 2 != 0)
            {
                cout << "2" << endl;
            }
        }

        else if (x > y)
        {

            if (x % 2 == 0 && y % 2 == 0)
            {
                cout << "1" << endl;
            }

            else if (x % 2 != 0 && y % 2 != 0)
            {
                cout << "1" << endl;
            }

            else if (x % 2 != 0 && y % 2 == 0)
            {
                cout << "2" << endl;
            }
            else if (x % 2 == 0 && y % 2 != 0)
            {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}
