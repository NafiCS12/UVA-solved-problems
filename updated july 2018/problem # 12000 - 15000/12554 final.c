#include<stdio.h>


int main()
{   char msgPreent[101][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char nameStor[101][101];
    int cntNam,cntMsg,num,k,l,t,i,j;
    scanf("%d",&t);
    l =(t/16)+1;

    for(i=0;i<t;i++)
    {
        scanf("%s",nameStor[i]);
    }

    for(cntNam=0,cntMsg=0,j=0;j<16*l;cntNam++,cntMsg++,j++)
    {

        if(cntNam==t){ cntNam =0;}
        if(cntMsg==16){cntMsg = 0;}

        printf("%s: %s\n",nameStor[cntNam],msgPreent[cntMsg]);
    }

    return 0;
}



