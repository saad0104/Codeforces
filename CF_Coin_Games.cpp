// Coin Games

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        cin >> str;

        int countU = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'U')
            {
                countU++;
            }
        }
        // cout << countU << endl;

        if(countU % 2 !=0)
        {
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
