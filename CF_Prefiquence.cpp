// Prefiquence

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
            int n, m;
            cin >> n >> m;
            string str1, str2;
            cin >> str1;
            cin >> str2;
            int count = 0;
            int j = 0;
            for (int i = 0; i < m; i++)
            {
                if (str2[i] == str1[j])
                {
                    count++;
                    j++;
                }
            }
            cout << count << endl;
        }
    
        return 0;
    }
