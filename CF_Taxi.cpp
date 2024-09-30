// Taxi

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
        {
            c1++;
        }
        else if (arr[i] == 2)
        {
            c2++;
        }
        else if (arr[i] == 3)
        {
            c3++;
        }
        else if (arr[i] == 4)
        {
            c4++;
        }
    }

    int cc2 = c2 % 2;
    int c1rem3 = c3;
    int c1rem2 = c2 % 2;

    while (c1 > 0 && (c1rem2 > 0 || c1rem3 > 0))
    {
        if (c1rem2 > 0)
        {
            if (c1 >= 2)
            {
                c1 = c1 - 2;
                c1rem2--;
            }
            else
            {
                c1--;
                c1rem2--;
            }
        }
        if (c1rem3 > 0 && c1 > 0)
        {
            c1--;
            c1rem3--;
        }
    }

    int c14 = 0, c13 = 0, c12 = 0;

    if (c1 >= 4)
    {
        c14 = c1 / 4;
        c1 = c1 % 4;
    }
    if (c1 >= 3)
    {
        c13 = c1 / 3;
        c1 = c1 % 3;
    }
    if (c1 >= 2)
    {
        c12 = c1 / 2;
        c1 = c1 % 2;
    }

    int c1all = 0;
    c1all = c1 + c14 + c13 + c12;
    cout << c4 + c3 + (c2 / 2) + cc2 + c1all << endl;

    return 0;
}
