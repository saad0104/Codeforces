//Stone on the table
//Codeforces 266A

#include<stdio.h>
#include<string.h>
 int main()
 {
    int n,count=0,i;
    scanf("%d",&n);

    char str[100];
    scanf("%s",&str);
    //printf("%s",str);

   for(i=0;i<strlen(str);i++)
   {

       if(str[i+1]==str[i])
       {
           count++;
       }

   }
   printf("%d",count);



     return 0;
 }
