// Fox and Snake

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)

        {
            if (i % 2 == 0)
            {
                if (i % 4 != 0 && j == n)
                {
                    cout << "#";
                }
                else if (i % 4 == 0 && j == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }

            if (i % 2 != 0)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}
