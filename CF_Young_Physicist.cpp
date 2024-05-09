// Young Physicist

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sumX = 0, sumY = 0, sumZ = 0;
    int x, y, z;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
