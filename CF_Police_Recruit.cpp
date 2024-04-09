// Police Recruit

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int crm = 0, plc = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == -1)
        {
            if (plc == 0)
            {
                crm++;
            }
            else
            {
                plc--;
            }
        }
        else
        {
            plc = plc + arr[i];
        }
    }

    cout << crm << endl;

    return 0;
}
