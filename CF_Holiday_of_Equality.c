//Holiday Of Equality

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[102];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
       // printf("%d", arr[i]);
      if(arr[i]>max)
      {
        max=arr[i];
      }

    }
   // printf("max %d\n",max);
    int sum=0;

for(int i=0;i<n;i++)
{

   sum=sum+(max-arr[i]);

}
printf("%d\n",sum);


    return 0;
}
