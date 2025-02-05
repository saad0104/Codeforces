// Olympiad

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vc;

    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        vc.push_back(g);
    }

    sort(vc.begin(), vc.end());
    auto it = unique(vc.begin(), vc.end());
    vc.erase(it, vc.end());

    // // cout << vc.size();

    // for (int i = 0; i < vc.size(); i++)
    // {
    //     cout << vc[i] << endl;
    // }
    
    int size = vc.size();

    if (vc[0] == 0)
    {
        cout << size - 1 << endl;
    }
    else
    {
        cout << size << endl;
    }

    return 0;
}
