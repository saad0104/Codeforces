//Words
//Codeforces 

#include<stdio.h>
 int main()
 {
     char str[120];
     int count1=0,count2=0;
     fgets(str,sizeof(str),stdin);

     //printf("%s",str);

     for(int i=0;i<(strlen(str));i++)
     {
         if(str[i]>='A' && str[i]<='Z')
         {
             count1++;
         }
         if(str[i]>='a' && str[i]<='z')
         {
             count2++;
         }

     }


     if(count2>=count1)
     {

     for(int j=0;j<strlen(str);j++)
     {


        str[j]=tolower(str[j]);

     }
     }

     else
     {

        for(int j=0;j<strlen(str);j++)
     {


        str[j]=toupper(str[j]);

     }
     }
      printf("%s\n",str);



     return 0;
 }
