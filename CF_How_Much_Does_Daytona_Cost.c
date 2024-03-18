//How Much Does Daytona Cost
//Codeforces 
#include<stdio.h>
#include<string.h>

 int main()
 {
     int n;
     scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {


     int x,k,count=0;
     scanf("%d %d",&x,&k);
     char num[110];

     for(int i=0;i<x;i++)
     {

         scanf("%d",&num[i]);
         if(num[i]==k)
         {
            count++;
         }

     }

     if(count>0)
     {

         printf("YES\n");
     }
     else
     {

         printf("NO\n");
     }

    }
    return 0;
 }
