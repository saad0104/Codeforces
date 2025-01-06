// Forked

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        set<pair<long, long>> k, q;

        k.insert(make_pair(xk + a, yk + b));
        k.insert(make_pair(xk + a, yk - b));
        k.insert(make_pair(xk - a, yk + b));
        k.insert(make_pair(xk - a, yk - b));
        k.insert(make_pair(xk + b, yk + a));
        k.insert(make_pair(xk + b, yk - a));
        k.insert(make_pair(xk - b, yk + a));
        k.insert(make_pair(xk - b, yk - a));

        q.insert(make_pair(xq + a, yq + b));
        q.insert(make_pair(xq + a, yq - b));
        q.insert(make_pair(xq - a, yq + b));
        q.insert(make_pair(xq - a, yq - b));
        q.insert(make_pair(xq + b, yq + a));
        q.insert(make_pair(xq + b, yq - a));
        q.insert(make_pair(xq - b, yq + a));
        q.insert(make_pair(xq - b, yq - a));

        int count = 0;

        auto it1 = k.begin();
        auto it2 = q.begin();

        for (const auto &pair : k)
        {
            if (q.find(pair) != q.end())
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
