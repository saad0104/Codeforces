//String Task

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
     char inp[200];
     int i;




     fgets(inp,sizeof(inp),stdin);



     for(i=0;i<strlen(inp)-1;i++)
     {
         inp[i]=tolower(inp[i]);

     }

     for(i=0;i<strlen(inp)-1;i++)
     {

         if(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u' || inp[i] == 'y')
         {
             continue;
            // printf("%c",inp[i]);
         }
         else{

            printf(".%c",inp[i]);
         }
     }

     return 0;
 }
