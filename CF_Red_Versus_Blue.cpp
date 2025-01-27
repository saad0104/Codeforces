// Red Versus Blue

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        int x = r / (b + 1);
        int y = r % (b + 1);

        for (int i = 0; i < y; i++)
        {
            cout << string(x + 1, 'R') << 'B';
        }
        for (int i = y; i < b; i++)
        {
            cout << string(x, 'R') << 'B';
        }
        cout << string(x, 'R') << endl;
        
    }

    return 0;
}
