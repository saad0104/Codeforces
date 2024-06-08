// K_th_Divisor

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> vc;

    for (long long i = 1; i <= sqrt(n); i++)    // Shortens the loop as (n<=10e15)
    {
        if (n % i == 0)
        {
            vc.push_back(i);

            if (i * i != n)
            {
                vc.push_back(n / i);         // Adds the other divisors also  (i,(n/i))
            }
        }
    }
    sort(vc.begin(), vc.end());
    if (vc.size() < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << vc[k - 1] << endl;
    }
    return 0;
}
