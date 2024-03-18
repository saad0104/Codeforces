//Odd one Out
//
#include<stdio.h>
 int main()
 {
     int n;
     scanf("%d",&n);
     for(int j=0;j<n;j++)
      {

        int arr[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);


        }

        if(arr[0]==arr[1])
        {
            printf("%d\n",arr[2]);
        }
        else if(arr[0]==arr[2])
        {
            printf("%d\n",arr[1]);
        }
        else if(arr[1]==arr[2])
        {
            printf("%d\n",arr[0]);
        }

      }




     return 0;
 }
