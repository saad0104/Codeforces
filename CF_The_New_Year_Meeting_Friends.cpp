// The New Year: Meeting Friends 

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

    int a, b, c;
    cin >> a >> b >> c;

    int up = max(a, max(b, c));
    int dw = min(a, min(b, c));
    cout << up - dw << endl;

    return 0;
}
