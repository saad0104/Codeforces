//George and Accomodation

#include <stdio.h>
int main()
{
    int total, living, n,count=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &living, &total);
        if ((total - living) >= 2)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
