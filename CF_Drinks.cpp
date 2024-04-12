// Drinks

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    float perc = (sum / (n * 100.0)) * 100.0;

    cout << fixed << setprecision(12) << perc << endl;

    return 0;
}
