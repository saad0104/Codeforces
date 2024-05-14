// Wrong Subtraction

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin >> x >> n;

    while(n>0)
    {
        if(x%10==0)
        {
            x=x/10;
        }
       else if(x%10 !=0)
        {
            x--;
        }
        n--;
    }

    cout << x << endl;



    return 0;
}
