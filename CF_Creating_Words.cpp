// codeforces 952 A 
// Creating Words

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        string s1, s2;
        cin >> s1 >> s2;

        cout << s2[0];

        for (int i = 1; i < s1.size(); i++)
        {
            cout << s1[i];
        }
        cout << " ";

        cout << s1[0];
        for (int i = 1; i < s2.size(); i++)
        {
            cout << s2[i];
        }
        cout << endl;
    }

    return 0;
}
