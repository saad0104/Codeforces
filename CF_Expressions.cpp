// Expressions

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int y, z, m, n;
    
    n = a + b + c;
    y = (a + b) * c;
    z = a * (b + c);
    m = a * b * c;

    n = max(n, y);
    n = max(n, z);
    n = max(n, m);

    cout << n << endl;

    return 0;
}
