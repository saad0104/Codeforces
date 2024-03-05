//Divide It!

#include<stdio.h>
int main()
{
   int x=0,i,y;
   long long n;
   scanf("%d",&y);
 
   for(i=y;i>=1;i--){
 
   scanf("%lld",&n);
 
    while(1)
{
      if(n==1)
   {
       break;
   }
 
    if(n%5==0)
   {
      n=(n*4)/5;
      x++;
   }
 
   if(n%3==0)
   {
    n=(2*n)/3;
    x++;
   }
 
  if(n%2==0)
   {
     n=n/2;
     x++;
   }
 
   else
   {
    x=-1;
    break;
   }
 
}
    if(x==-1)
    {
        printf("%d\n",x);
    }
    else
    {
 
         printf("%d\n",x);
 
    }
    x=0;
   }
 
    return 0;
}
