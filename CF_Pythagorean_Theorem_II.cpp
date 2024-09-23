// Pythogorian Theorem

#include <bits/stdc++.h>
using namespace std;
bool perfectsqr[100000001];
int main()
{

    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        perfectsqr[i * i] = true;
    }

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {

            int csqr = a * a + b * b;
            if (csqr <= (n * n) && perfectsqr[csqr])
            {
                count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}
