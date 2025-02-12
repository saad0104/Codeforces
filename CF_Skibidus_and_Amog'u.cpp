// Skibidus and Amog'u

#include <bits/stdc++.h>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
    string str;
    cin >> str;

    int l = str.length();
    cout << str.substr(0, l - 2) << "i" << endl;
    }

    return 0;
}
