// CopyCopyCopy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        list<int> l1;

        for (int i = 0; i < n; i++)
        {
            l1.push_back(arr[i]);
        }

        l1.sort();
        l1.unique();
        int s = l1.size();

        cout << s << endl;
    }

    return 0;
}
