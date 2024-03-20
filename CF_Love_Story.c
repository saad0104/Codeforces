//Love Story

#include<stdio.h>
 int main()
 {
     int n;
     scanf("%d",&n);
     while(n--)
     {

     char cf[]="codeforces";
     char inp[11];
     scanf("%s",&inp);
    // printf("%s",inp);
    int count=0;

     for(int i=0;i<10;i++)
     {

         if(inp[i] != cf[i])
         {
             count++;
         }

     }
     printf("%d\n",count);
     }


     return 0;
 }
