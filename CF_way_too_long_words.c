#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int x,count;
 
    scanf("%d",&n);
 
    while(n>=0)
    {
 
    char word[102];
    fgets(word,sizeof(word),stdin);
    //printf("%s",word);
   // printf("%d\n",sizeof(word));
   // printf("%d\n",strlen(word));
    x = strlen(word)-1;
    // printf("%d",x);
 
    if(x>10)
 
    {
        printf("%c%d%c\n",word[0],(x-2),word[x-1]);
 
    }
    else{
 
        printf("%s\n",word);
    }
     n--;
    }
    return 0;
}
