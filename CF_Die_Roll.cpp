// Die Roll 

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int w, y;
    cin >> w >> y;

    int nom, denom;

    nom = (6 - max(w, y) + 1);
    denom = 6;
    int g = __gcd(nom, denom);
    nom = nom / g;
    denom = denom / g;

    cout << nom << "/" << denom << endl;

    return 0;
}
