//Kana and Dragon Quest Game

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin >> t;
while(t--)
{

int x,n,m;
cin >> x >> n >> m;

int sum=x;

while(sum >20 && n>0)
{
sum=(sum/2)+10;
n--;

}

while(m>0)
{
sum=sum-10;
m--;
}


if(sum>0)
{
cout << "No" << endl;
}

else
{
cout << "Yes" << endl;
}

 }

return 0;
}
