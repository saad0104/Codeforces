//Team

#include<stdio.h>
int main()
{
    int x,y,z,count=0,solve=0,n;
 
    scanf("%d",&n);
 
    while(n>0){
            count=0;
 
    scanf("%d %d %d",&x,&y,&z);
 
    if(x==1)
    {
        count++;
    }
    if(y==1)
    {
        count++;
    }
    if(z==1)
    {
        count++;
    }
    if(count>=2)
    {
        solve++;
    }
    n--;
    }
    printf("%d\n",solve);
    return 0;
}
