// Vlad and the Best of Five

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char str[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> str[i];
        }
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (str[i] == 'A')
            {
                a++;
            }
            else if (str[i] == 'B')
            {
                b++;
            }
        }
        if (a > b)
        {
            cout << "A" << endl;
        }
        if (b > a)
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
