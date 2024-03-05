//Bit++

#include<stdio.h>
#include<string.h>
int main()
{

   int n,x=0;
   char str[4];

   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
   scanf("%s",&str);
   //printf("%s",str);

   if((strcmp(str,"X++")==0)  ||  (strcmp(str,"++X")==0))
   {
       x++;
   }
   if((strcmp(str,"--X")==0) || (strcmp(str,"X--")==0))
   {
       x--;
   }
   }

   printf("%d\n",x);


    return 0;
}
