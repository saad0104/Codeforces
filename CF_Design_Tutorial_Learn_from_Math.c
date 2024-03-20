// Design Tutorial: Learn from Math

#include<stdio.h>
 int main()
 {

    int x;
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d 4\n",(x-4));  //lowest even composite  0,2-prime
    }
    else{

        printf("%d 9\n",(x-9));  //lowest odd composite  1,3,5,7-prime
    }


    return 0;
 }
