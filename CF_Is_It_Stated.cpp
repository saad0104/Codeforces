// April fools day contest 2024
// Is It Stated

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string arr;
        cin >> arr;

        int c = 0;

        for (int i = 0; i < arr.length(); i++)
        {
            if (arr[i] == 'i' && arr[i + 1] == 't')
            {
                c++;
            }
        }

        if (c == 0)
        {
            cout << "No" << endl;
            c = 0;
        }
        else

        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
