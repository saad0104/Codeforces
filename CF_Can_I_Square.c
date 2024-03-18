//Can I Square

//Some long long int are not useful.

#include<stdio.h>
#include<math.h>
 long long int main()
 {
     long long int n;
     scanf("%lld",&n);

     for(long long int i=0;i<n;i++)
     {

     long long int x,sum=0,cnt=0;
     scanf("%lld",&x);
     long long int arr[200001];

     for(long long int i=0;i<x;i++)
     {
         scanf("%lld",&arr[i]);
         sum=sum+arr[i];

     }

    long long check;
    check=sqrt(sum);

    if(check*check==sum)
    {
        printf("YES\n");
    }
    else{

        printf("NO\n");
    }


     }

     return 0;
 }
