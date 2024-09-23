// Chemistry

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int freq[26] = {0};

        for (char ch : str)
        {
            freq[ch - 'a']++;
        }
        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd - 1 > k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
