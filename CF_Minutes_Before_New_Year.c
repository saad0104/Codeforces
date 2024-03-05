//Minutes Before New Year

#include<stdio.h>
int main()
{
  int hour,min,i,no,time;
  int min2;
 
  scanf("%d",&no);
 
  for(i=0;i<no;i++)
  {
    scanf("%d %d",&hour,&min);
 
    min2=(24*60)-((60*hour)+min);
 
 
    printf("%d\n",min2);
 
 
  }
 
 
return 0;
}
