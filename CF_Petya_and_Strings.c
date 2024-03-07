//Petya and Strings



 #include<stdio.h>
 #include<string.h>
  int main()
  {
      char str1[200],str2[200];
     // char str3[100],str4[100];
      int result,i,j;

      fgets(str1,sizeof(str1),stdin);
      fgets(str2,sizeof(str2),stdin);


      for(i=0;i<=strlen(str1);i++)
      {
          str1[i]=tolower(str1[i]);
      }

     for(i=0;i<=strlen(str1);i++)
      {
          str2[i]=tolower(str2[i]);
      }


      result = strcmp(str1,str2);

      if(result==0)
      {
          printf("0\n");
      }
      else if(result>0)
      {
          printf("1\n");
      }
      else if(result<1)
      {
          printf("-1\n");
      }



      return 0;
  }
