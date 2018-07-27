#include<stdio.h>
#include<math.h>

int main()
{
    int T,K,P,rf,N,i,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
    scanf("%d %d %d",&N,&K,&P);
    r = ((K-1+P)%N);
    rf = r+1;
    printf("Case %d: %d\n",i,rf);
    }
return 0;
}
