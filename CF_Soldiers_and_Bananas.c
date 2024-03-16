//Soldiers and Bananas
//Codeforces 546A

#include<stdio.h>
 int main()
 {

    long start,money,banana,shor=0;

    scanf("%ld %ld %ld",&start,&money,&banana);

    for(int i=1;i<=banana;i++)
    {

       shor=shor+(i*start);

    }

    if(shor<=money)
    {
        printf("0\n");
    }
    else
    {
    printf("%ld",shor-money);
    }

     return 0;
 }
