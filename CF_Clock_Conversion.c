//Clock Conversion

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

   char s[4];
   scanf("%s",&s);
   int hh,mm;
   for(int i=0;i<5;i++)
   {
       hh=((s[0]-'0')*10)+(s[1]-'0');
       mm=((s[3]-'0')*10)+(s[4]-'0');
   }

   //int time;

   if(hh>=1 && hh<=11)

{
printf("%02d",hh);
printf(":");
printf("%02d",mm);
printf(" AM\n");
}
else if(hh==12)
{

printf("%02d",hh);
printf(":");
printf("%02d",mm);
printf(" PM\n");

}
 else if(hh>12)
    {
        hh=hh-12;
printf("%02d",hh);
printf(":");
printf("%02d",mm);
printf(" PM\n");
 }
 else if(hh==0)
 {
     hh=hh+12;
    printf("%02d",hh);
printf(":");
printf("%02d",mm);
printf(" AM\n");


 }

 }
    return 0;
}
