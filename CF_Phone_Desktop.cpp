// Phone Desktop

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        float b4 = ceil(y/2.0);
       // cout << "b4" << b4 << endl;

        int reamins = (b4*15)-(y*4);

        // cout <<"rem=" << reamins << endl;

        if(x<=reamins)
        {
            cout << b4 << endl;
        }

        else{
            cout << ceil((x-reamins)/15.0)+b4 << endl;
        }


    }
    return 0;
}
