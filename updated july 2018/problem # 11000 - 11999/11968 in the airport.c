#include<stdio.h>
#include<math.h>

int main()
{
    int inc,t;
    scanf("%d",&t);
    for(inc=1;inc<=t;inc++)
    {
        int x,y,l,i,n,m,k;

        long long int c[1001]={0},d[1001]={0},garb[1001]={0},avgC,avgD,sc=0,sd=0;
        scanf("%d %d %d",&n,&m,&k);
        l = n-(m+k);
            for(i=0;i<m;i++)
            {
                    scanf("%lld",&c[i]);sc+=c[i];
            }
            avgC= ceil( (double)sc/m );

            for(x=0;x<k;x++)
            {
                    scanf("%lld",&d[x]);sd+=d[x];
            }
            avgD = ceil((double)sd/k);
            for(y=0;y<l;y++)
            {
                    scanf("%lld",&garb[y]);
            }
            printf("Case #%d: %lld %lld\n",inc,avgC,avgD);

        }

    return 0;
}
