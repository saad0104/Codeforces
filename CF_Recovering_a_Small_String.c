//Recovering a small String
//Codeforces !931A

#include<stdio.h>
 int main()
 {

 int n,e;
 scanf("%d",&n);
     int count,br=0,i,j,k;
     char str[27]=" abcdefghijklmnopqrstuvwxyz ";


   /* for(int i=0;i<=26;i++)
    {
        printf("%d %c\n",i,str[i]);

    }
*/

for(e=0;e<n;e++)
{

     scanf("%d",&count);

     for(int i=1;i<=26;i++)
     {
         for(int j=1;j<=26;j++)
         {

             for(int k=1;k<=26;k++)
             {

                 if((k+j+i)==count)
                 {
                     printf("%c%c%c\n",str[i],str[j],str[k]);
                     br++;
                 }
                 if(br==1)
                 {
                     break;
                 }


             }

           if(br==1)
                 {
                     break;
                 }

         }
          if(br==1)
                 {
                     break;
                 }

     }
     br=0;
}


     return 0;
 }
