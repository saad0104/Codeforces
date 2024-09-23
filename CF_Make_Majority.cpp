// Make Majority

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        string str;
        cin >> str;

        vector<int> vc;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0' && str[i + 1] == '0')
            {
                continue;
            }

            else
            {
                vc.push_back(str[i]);
            }
        }
        int count1 = 0, count2 = 0;
        for (char st : vc)
        {
            // cout << st << " ";

            if (st == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        // cout << count1 << " " << count2;

        if (count2 > count1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
