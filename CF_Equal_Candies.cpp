//Equal Candies

#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;

    long chc[n];
    for (int i = 0; i < n; i++)
    {

        cin >> chc[i];
    }
    sort(chc, chc + n);
    long k, eat = 0;
    k = chc[0];

    for (int i = 1; i < n; i++)
    {
        eat = eat + (chc[i] - k);
    }
    cout << eat << endl;
}
    return 0;
}
