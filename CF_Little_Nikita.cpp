// Little Nikita

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        
        if( n>=m && n%2==0 && m%2==0)
        {
            cout << "Yes" << endl;
        }  
        else if(n>=m && m%2 !=0 && n%2 !=0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
