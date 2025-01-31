// Amusing Joke

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    int vc[26] = {0};

    bool tr = false;
    for (int i = 0; i < str1.length(); i++)
    {
        vc[str1[i] - 'A']++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        vc[str2[i] - 'A']++;
    }

    for (int i = 0; i < str3.length(); i++)
    {
        vc[str3[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (vc[i] != 0)
        {
            tr = true;
            break;
        }
    }

    if (tr == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
