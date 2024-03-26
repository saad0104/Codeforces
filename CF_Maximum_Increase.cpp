//Maximum Increase

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1, s = 1;
    for (long long i = 0; i < (n - 1); i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (s < count)
        {
            s = count;
        }
    }

    cout << s << endl;

    return 0;
}
