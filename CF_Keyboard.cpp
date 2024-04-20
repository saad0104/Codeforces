// Keyboard

#include <bits/stdc++.h>
using namespace std;
int main()
{

    char keyb[] = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    char side;
    cin >> side;

    string str;
    cin >> str;

    int n = str.size();

    if (side == 'R')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if (str[i] == keyb[j])
                {
                    cout << keyb[j - 1];
                }
            }
        }
    }

    else if (side == 'L')
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if (str[i] == keyb[j])
                {
                    cout << keyb[j + 1];
                }
            }
        }
    }

    cout << endl;

    return 0;
}
