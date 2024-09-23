// Strong Password

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        int count2 = 0;

        // if (str.size() == 1)
        // {
        //     int x = str[0];
        //     char c = x + 1;
        //     cout << str[0] << c << endl;
        // }
        // else
        // {
        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i];
            if (str[i] != str[i + 1])
            {
                count++;
            }

            if (str[i] == str[i + 1] && count2 == 0)
            {
                int x = str[i];
                char c;

                if (str[i] == 'z')
                {
                    c = x - 1;
                }
                else
                {
                    c = x + 1;
                }

                cout << c;
                count2++;
            }

            if (count == str.size())
            {
                int x = str[i];
                char c;

                if (str[i] == 'z')
                {
                    c = x - 1;
                }
                else
                {
                    c = x + 1;
                }

                cout << c;
                count2++;
            }
        }
        cout << endl;
        // }
    }

    return 0;
}
