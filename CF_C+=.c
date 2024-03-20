//C+=

#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
while(x--)
{

int a,b,n,count=0;
scanf("%d %d %d",&a,&b,&n);

while(a<=n && b<=n)
{

    if(a>b)
    {
        b += a;
    }
    else
    {
        a += b;
    }

    count++;
}
printf("%d\n",count);

}



return 0;

}
