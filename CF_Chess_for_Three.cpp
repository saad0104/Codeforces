// Chess for Three
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int t[3];
            t[0] = a;
            t[1] = b;
            t[2] = c;

            int count = 0;

            while (1)
            {
                sort(t, t + 3);

                if (t[0] == 0 && t[1] == 0)
                {
                    break;
                }
                if (t[1] != 0 && t[2])
                {
                    t[1]--;
                    t[2]--;
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}
