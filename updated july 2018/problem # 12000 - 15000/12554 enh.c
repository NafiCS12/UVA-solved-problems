#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char msgPrint[101][10]={"Happy","birthday","to","you",
    "Happy","birthday","to","you",
    "Happy","birthday","to","Rujia",
    "Happy","birthday","to","you"};

    char nam[101][101];

    int cntNam,cntMsg,num,k,l,t,i,j;

    scanf("%d",&t);

    l =(t/16)+1;

    for(i=0;i<t;i++)
    {
        scanf("%s",nam[i]);
    }

    for(cntNam=0,cntMsg=0,j=0;j<16*l;cntNam++,cntMsg++,j++)
    {
        if(cntNam==t){ cntNam =0;}
        if(cntMsg==16){cntMsg = 0;}

        printf("%s: %s\n",nam[cntNam],msgPrint[cntMsg]);
    }
    /*printf("\n");*/
    return 0;
}



