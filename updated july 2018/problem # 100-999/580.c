#include <stdio.h>

int main()
{
    int cases,i;
    long add[31];
    add[3]=1;
    add[4]=2;
    add[5]=4;

    for( i=6;i<31;i++)
    {
        add[i] = add[i-3] + add[i-2] + add[i-1];
    }

    long bg[31];
    bg[0]=0;
    bg[1]=0;
    bg[2]=1;

    for( i=3;i<31;i++)
    {
        bg[i] = 2*bg[i-1] + add[i];
    }

    while(1)
    {
        scanf("%d",&cases);

        if(cases==0)
            break;

        printf("%ld\n",bg[cases-1]);
    }

    return 0;
}
