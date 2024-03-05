//Marathon

#include<stdio.h>
int main()
{
    int x,a,b,c,d,count=0;
    scanf("%d",&x);
 
    while(x>0)
    {
        count=0;
 
        scanf("%d %d %d %d",&a,&b,&c,&d);
 
        if(b>a)
        {
            count++;
        }
         if(c>a)
        {
            count++;
        }
         if(d>a)
        {
            count++;
        }
        printf("%d\n",count);
        x--;
 
    }
 
 
 
    return 0;
}
