//Word_Capitalization
//Codfeforces 281A

#include<stdio.h>
 int main()
 {
     char word[1000];
     fgets(word,sizeof(word),stdin);

    //printf("%s\n",word);

     if(word[0]<='z' && word[0]>='a')
     {

         word[0]=toupper(word[0]);

     }
     printf("%s\n",word);



     return 0;
 }
