// Helpful Maths

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;

    int sz = str.size();

    int arr[105];
    int k = 0;

    for (int i = 0; i < sz; i++)
    {
        if (str[i] != '+')
        {
            arr[k++] = str[i] - '0';
        }
    }

    sort(arr, arr + k);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i];

        if (i == (k - 1))
        {
            break;
        }
        cout << "+";
    }

    return 0;
}
