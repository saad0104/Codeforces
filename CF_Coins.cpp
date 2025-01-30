// 47B Coins

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    // cin >> str;

    map<char, int> mp;
    mp.insert(pair<char, int>('A', 0));
    mp.insert(pair<char, int>('B', 0));
    mp.insert(pair<char, int>('C', 0));

    for (int i = 0; i < 3; i++)
    {
        cin >> str;
        if (str[1] == '>')
        {
            mp[str[0]]++;
        }
        else if(str[1] =='<')
        {
            mp[str[2]]++;
        }
    }

    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        if (mp['A'] == 0)
            cout << "A";
        else if (mp['B'] == 0)
            cout << "B";
        else if (mp['C'] == 0)
            cout << "C";

        if (mp['A'] == 1)
            cout << "A";
        else if (mp['B'] == 1)
            cout << "B";
        else if (mp['C'] == 1)
            cout << "C";

        if (mp['A'] == 2)
            cout << "A";
        else if (mp['B'] == 2)
            cout << "B";
        else if (mp['C'] == 2)
            cout << "C";
    }
    cout << endl;

    return 0;
}
