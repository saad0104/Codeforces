// Array Cloning Technique

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
        int arr[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        int freq = 0;
        for (auto it : mp)
        {
            freq = max(freq, it.second);
        }
        int count = 0;
        while (freq < n)
        {
            int rem = n - freq;     // checks how many items have to be replaced
            int can = freq;         // how many elemnets we can replace at a time.
            count++;                // clone count++
            count += min(can, rem); // replace count++
            freq += min(can, rem);  // what is the freq after replacing
        }
        cout << count << endl;
    }

    return 0;
}
