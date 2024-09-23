// Card game

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int count = 0;

        // round 1-

        int r111 = 0, r112 = 0;

        if (a1 > b1)
        {
            r111++;
        }
        if (a1 < b1)
        {
            r112++;
        }
        if (a2 > b2)
        {
            r111++;
        }
        if (a2 < b2)
        {
            r112++;
        }
        if (r111 > r112)
        {
            count++;
        }

        // round -2

        int r121 = 0, r122=0;

        if (a1 > b2)
        {
            r121++;
        }
        if (a1 < b2)
        {
            r122++;
        }
        if (a2 > b1)
        {
            r121++;
        }
        if (a2 < b1)
        {
            r122++;
        }
        if (r121 > r122)
        {
            count++;
        }

        // round -3

        int r131 = 0, r132 = 0;

        if (a2 > b2)
        {
            r131++;
        }
        if (a2 < b2)
        {
            r132++;
        }
        if (a1 > b1)
        {
            r131++;
        }
        if (a1 < b1)
        {
            r132++;
        }
        if (r131 > r132)
        {
            count++;
        }

        // round -4

        int r141 = 0, r142 = 0;

        if (a2 > b1)
        {
            r141++;
        }
        if (a2 < b1)
        {
            r142++;
        }
        if (a1 > b2)
        {
            r141++;
        }
        if (a1 < b2)
        {
            r142++;
        }
        if (r141 > r142)
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
