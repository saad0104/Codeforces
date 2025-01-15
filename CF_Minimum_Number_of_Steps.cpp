// Minimum Number of Steps

#include <bits/stdc++.h>
using namespace std;
#define p 1000000007
int main()
{
    string str;
    cin >> str;
    int b_count=0, step=0;

    for (int i = str.length() - 1; i >= 0; --i)
    {
        if (str[i] == 'b')
        {
            b_count = (b_count + 1) % p;
        }
        else if (str[i] == 'a')
        {
            step = (step + b_count) % p;
            b_count = (b_count * 2) % p;
        }
    }

    cout << step << endl;
    return 0;
}

