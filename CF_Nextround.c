//Nextround
//Codeforces

#include<stdio.h>
int main()
{
    int n,place,i,count=0,marks;
    scanf("%d %d",&n,&place);
 
    int mark[n];
 
    for(i=0;i<n;i++)
    {
 
        scanf("%d",&mark[i]);
    }
 
    marks = mark[place-1];
 
 
    for(i=0;i<n;i++)
    {
 
    if(mark[i] > 0 && mark[i] >= marks)
        {
            count++;
 
        }
 
    }
    printf("%d\n",count);
 
    return 0;
}
