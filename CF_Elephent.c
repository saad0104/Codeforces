//Elephent
//Codeforces 617A

#include<stdio.h>
 int main()
 {
     long n,ans;
     scanf("%ld",&n);

     ans=(n/5)+((n%5)/4)+(((n%5)%4)/3)+((((n%5)%4)%3)/2)+(((((n%5)%4)%3)%2)/1);

     printf("%d\n",ans);

     return 0;
 }
