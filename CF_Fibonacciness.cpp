// Fibonacciness

#include <bits/stdc++.h>
using namespace std;

int calcfibo(int a, int b, int c, int d, int e)
{
    int x = 0;
    if (a + b == c)
    {
        x++;
    }
    if (b + c == d)
    {
        x++;
    }
    if (c + d == e)
    {
        x++;
    }

    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c1, c2, c3, d, e;
        cin >> a >> b >> d >> e;

        int fibo1 = 0;
        int fibo2 = 0;
        int fibo3 = 0;
        c1 = a + b;
        fibo1 = calcfibo(a, b, c1, d, e);
        c2 = d - b;
        fibo2 = calcfibo(a, b, c2, d, e);
        c3 = e - d;
        fibo3 = calcfibo(a, b, c3, d, e);

        cout << max(fibo1, max(fibo2, fibo3)) << endl;
    }

    return 0;
}
