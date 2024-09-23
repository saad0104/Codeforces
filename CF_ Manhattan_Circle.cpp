// Manhattan Circle

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        char arr[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        vector<int> vc;

        for (int i = 0; i < m; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '#')
                {
                    count++;
                }
            }
            vc.push_back(count);
        }
        int max = *max_element(vc.begin(), vc.end());
        int maxP;
        for (int i = 0; i < vc.size(); i++)
        {
            if (vc[i] == max)
            {
                // cout << i + 1 << endl;
                maxP = i;
            }
        }
        // cout <<"X " <<maxP+1 << endl;

        vector<int> vc2;
        for (int j = 0; j < n; j++)
        {
            if (arr[maxP][j] == '#')
            {
                vc2.push_back(j + 1);
            }
        }
        int center = ((vc2[0]) + (vc2[vc2.size() - 1])) / 2;

        cout << maxP + 1 << " " << center << endl;
    }

    return 0;
}
