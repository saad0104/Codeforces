//Seeting Up a camp


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        
    long intro, extro, uni;
    scanf("%ld %ld %ld", &intro, &extro, &uni);

    long intro_tent, extro_tent, uni_tent, sum;
    long uni_tent3, uni_tent2, uni_tent1, uni_tot;

    if (extro % 3 == 0)
    {
        intro_tent = intro;
        extro_tent = extro / 3;

        uni_tent3 = (uni / 3);
        uni_tent2 = (uni % 3) / 2;
        uni_tent1 = ((uni % 3) % 2);
    
        uni_tot = uni_tent3 + uni_tent2 + uni_tent1;

        sum = intro_tent + extro_tent + uni_tot;
    }

    else if (extro % 3 == 2 && uni >= 1)
    {

        intro_tent = intro;
        extro_tent = (extro / 3) + 1;
        uni_tent3 = (uni - 1) / 3;
        uni_tent2 = ((uni - 1) % 3) / 2;
         uni_tent1 = (((uni - 1) % 3) % 2)/1;
       
        uni_tot = uni_tent3 + uni_tent2 + uni_tent1;
        sum = intro_tent + extro_tent + uni_tot;
    }

    else if (extro % 3 == 2 && uni < 1)
    {
        sum = -1;
    }

    else if (extro % 3 == 1 && uni >= 2)
    {
        intro_tent = intro;
        extro_tent = (extro / 3) + 1;
        uni_tent3 = (uni - 2) / 3;
        uni_tent2 = ((uni - 2) % 3) / 2;
        uni_tent1 = (((uni - 2) % 3) % 2)/1;
       
        uni_tot = uni_tent3 + uni_tent2 + uni_tent1;
    
        sum = intro_tent + extro_tent + uni_tot;
    }

    else if (extro % 3 == 1 && uni < 2)
    {
        sum = -1;
    }

    printf("%ld\n", sum);
}

    return 0;
}
