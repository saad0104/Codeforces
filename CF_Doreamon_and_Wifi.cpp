// Doreamon and Wifi

#include <bits/stdc++.h>
using namespace std;

long fact(int n)
{
    if (n == 0)
        return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    string strog, strget;
    cin >> strog >> strget;

    int current = 0, target = 0, un = 0;

    for (int i = 0; i < strog.size(); i++)
    {
        if (strog[i] == '+')
        {
            target++;
        }
        if (strog[i] == '-')
        {
            target--;
        }
    }
    for (int i = 0; i < strget.size(); i++)
    {
        if (strget[i] == '+')
        {
            current++;
        }
        if (strget[i] == '-')
        {
            current--;
        }
        if (strget[i] == '?')
        {
            un++;
        }
    }

    int diff = abs(target - current);

    double zero = 0;

    if (diff > un || (un - diff) % 2 != 0)
    {
        cout << setprecision(12) << fixed << zero << endl;
    }
    else
    {
        int pneed = (un + diff) / 2;

        int denom = pow(2, un);
        double prob = ((fact(un) * 1.0) / (double)(fact(pneed) * fact(un - pneed))) / denom;
        cout << setprecision(12) << fixed << prob << endl;
    }

    return 0;
}


