//Rudolf_And_Ticket

#include<stdio.h>
 int main()
 {
     int t;
     scanf("%d",&t);
     int a;

     for(a=1;a<=t;a++)
     {

     int n,m,k;
     scanf("%d %d %d",&n,&m,&k);
     int nn[n],mm[m];
     int i,j;
     int count=0;

    for(i=0;i<n;i++)
    {
       // printf("i %d=",i);
        scanf("%d",&nn[i]);

    }
     for(j=0;j<m;j++)
     {
        // printf("j %d=",j);
         scanf("%d",&mm[j]);
     }

     for(i=0;i<n;i++)
     {

         for(j=0;j<m;j++)
         {

             if((nn[i]+mm[j])<=k)
             {
                 count++;
             }

         }


     }
     printf("%d\n",count);
     count=0;
     }




     return 0;
 }
