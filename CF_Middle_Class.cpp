// Middle Class

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        vector<long long> vc;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vc.push_back(x);
        }

        sort(vc.begin(), vc.end());

        long long sum = 0, count = 0;

        for (long long i = n - 1; i >= 0; i--)
        {
            sum += vc[i];
            double avg = sum / (double(n - i));

            if (avg >= x)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
