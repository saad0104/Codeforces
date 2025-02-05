//  Choose Two Numbers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> vc1;

    for (int i = 0; i < a; i++)
    {
        int g;
        cin >> g;
        vc1.push_back(g);
    }
    sort(vc1.begin(), vc1.end());

    int b;
    cin >> b;
    vector<int> vc2;

    for (int i = 0; i < b; i++)
    {
        int g;
        cin >> g;
        vc2.push_back(g);
    }
    sort(vc2.begin(), vc2.end());
    cout << vc1[a - 1] << " " << vc2[b - 1] << endl;
}
