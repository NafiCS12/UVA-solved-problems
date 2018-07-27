#include<stdio.h>
#include<string.h>

int main()
{
    char nam[101][101];
    int cntNam,cntMsg,num,k,l,t,i,j;
    scanf("%d",&t);

    getchar();

    l =(t/16)+1;

    for(i=0;i<t;i++)
    {
        scanf("%s",nam[i]);
    }

    for(cntNam=0,j=0;j<16*l;cntNam++,cntMsg++,j++)
    {

        if(cntNam==t){ cntNam =0;}

        printf("%s: ",nam[cntNam%t]);
         if(j%16==11)
         {
            puts("Rujia");
            continue;
         }
        if(j%4==0)
            puts("Happy");
        else if(j%4==1)
            puts("birthday");
        else if(j%4==2)
            puts("to");
        else
            puts("you");
    }

    return 0;
}



