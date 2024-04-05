// Dubstep

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string wb;
    cin >> wb;

    for (int i = 0; i < wb.size(); i++)
    {
        if (wb[i] == 'W' && wb[i + 1] == 'U' && wb[i + 2] == 'B')
        {
            cout << " ";
            i = i + 2;
        }
        else
        {
            cout << wb[i];
        }
    }
    return 0;
}
