// Magnets

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];

        if (arr[i - 1] != arr[i])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
