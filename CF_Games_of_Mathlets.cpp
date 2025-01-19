// Games of Mathletes

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, sum;
        cin >> n >> sum;
        // long long sum;
        // cin >> sum;

        vector<long long> vc;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vc.push_back(x);
        }

        sort(vc.begin(), vc.end());

        long long count = 0;

        long long i = 0;
        long long j = n - 1;

        while (i < j)
        {
            long long s = vc[i] + vc[j];
            if (sum == s)
            {
                count++;
                i++;
                j--;
            }
            else if (s < sum)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        cout << count << endl;
    }

    return 0;
}
