#include<stdio.h>
int main(void)
{
    int z,i,m,l[10005],count=0,f;
    while(scanf("%d%d%d%d",&z,&i,&m,&l[0])==4)
    {
        if(!z&&!i&&!m&&!l[0]) break;
        count++;
        int t=0,j,k;
        while(1)
        {
            t++;
            l[t]=(z*l[t-1]+i)%m;
            for(j=0;j<t;j++)
                if(l[t]==l[j])
                    goto print;
        }
print:  printf("Case %d: %d\n",count,t-j);
    }
    return 0;
}
