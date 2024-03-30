//cAPS lock

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string arr;
    cin >> arr;
    int count = 0;
    int l = arr.length();

    for (int i = 0; i < l; i++)
    {
        if (isupper(arr[i]))
        {
            count++;
        }
    }

    if (count == l)
    {
        for (int i = 0; i < l; i++)
        {
            arr[i] = tolower(arr[i]);
        }
        cout << arr << endl;
    }

    else if (islower(arr[0]) && count == (l - 1))
    {
        arr[0] = toupper(arr[0]);
        for (int i = 1; i <= l; i++)
        {
            arr[i] = tolower(arr[i]);
        }
        cout << arr << endl;
    }

    else
    {
        cout << arr << endl;
    }

    return 0;
}
