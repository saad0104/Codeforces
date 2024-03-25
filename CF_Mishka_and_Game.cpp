//Mishka and Game

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int mishka, chris, msk = 0, crs = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> mishka;
        cin >> chris;
        if (mishka > chris)
        {
            msk++;
        }
        if (chris > mishka)
        {
            crs++;
        }
    }
    if (msk > crs)
    {
        cout << "Mishka" << endl;
    }
    else if (crs > msk)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
