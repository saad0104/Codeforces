//Bear and Big Brother
//Codeforces 791A

#include<stdio.h>
 int main()
 {
     int m,n,i=0;
     scanf("%d %d",&m,&n);

     while(1)
     {

       m=3*m;
       n=2*n;
       i++;
       if(m>n)
            break;

     }
     printf("%d\n",i);


     return 0;
 }
