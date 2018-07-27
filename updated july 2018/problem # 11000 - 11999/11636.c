#include<stdio.h>

int main()

{
    int r,f,t,N,i =1;

    while(scanf("%d",&N)==1 && N>0)
    {
        r = (log2(N));
        t = floor(r);
        printf("Case %d: %d\n",i,t);
        i=i+1;

    }
return 0;
}
