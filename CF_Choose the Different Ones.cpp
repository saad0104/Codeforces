#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int m, n, k;
        cin >> m >> n >> k;
        vector<int> vc;
        vector<int> vc2;
        vector<int> vc3;
        vector<int> vc4;


        for (int i = 0; i < m; i++)
        {
            int num;
            cin >> num;
            if (num <= k)
            {
                vc.push_back(num);
            }
        }

        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            if (num <= k)
            {
                vc2.push_back(num);
            }
        }

        sort(vc.begin(), vc.end());
        vc.resize(distance(vc.begin(), unique(vc.begin(), vc.end())));

        sort(vc2.begin(), vc2.end());
        vc2.resize(distance(vc2.begin(), unique(vc2.begin(), vc2.end())));


        if (vc.size() < k / 2 || vc2.size() < k / 2)
        {
            cout << "NO" << endl;
        }

        else
        {
            int count = 0;

            vc3.insert(vc3.begin(), vc2.begin(), vc2.end());
            vc3.insert(vc3.end(), vc.begin(), vc.end());



            set_intersection(vc.begin(),vc.end(),
                              vc2.begin(),vc2.end(),back_inserter(vc4));

            //  cout << vc4.size() << endl;

            if (((vc3.size()) - vc4.size()) == k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
