// Magic Number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;

    int k = 0;

    for (int i = 0; i < n.size();)
    {

        if (n[i] == '1' && n[i + 1] == '4' && n[i + 2] == '4')
        {
            i = i + 3;
            k++;
            continue;
        }

        else if (n[i] == '1' && n[i + 1] == '4')
        {
            i = i + 2;
            k++;
            continue;
        }

        else if (n[i] == '1')
        {
            i = i + 1;
            k++;
            continue;
        }

        else
        {
            k = 0;
            break;
        }
    }

    if (k == 0)
    {
        cout << "NO" << endl;
    }

    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
