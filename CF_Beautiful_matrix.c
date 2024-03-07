//Beautiful Matrix
//263 A

#include<stdio.h>
int main()
{
    int i,j;
    int x=0;

    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {

            scanf("%d",&x);

            if(x==1)
            {
              printf("%d",abs(2-j)+abs(2-i));
              break;
            }

        }

    }


    return 0;
}
