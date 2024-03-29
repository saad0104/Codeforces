// Ehab and GCD

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = 1, b = x - 1;    //gcd is 1,lcm is (x-1) ,combines x;
        cout << a << " " << b << endl;
    }

    return 0;
}
