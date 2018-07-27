#include<stdio.h>

int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {   int inc=0,f = 0;
        scanf("%lld",&n);
        if(n==1)printf("1\n");
        else
        {
            long long int i,j,l = n/2;
            for(i=1;i<=l;i++)
            {
                for(j=1;j<=l;j++)
                    if(i*j==n)
                    {
                        f=1;
                        inc++;
                        printf("%lld%lld\n",i,j);
                        break;
                    }
                    if(inc>0)
                        break;
            }
            if(f==0)
                printf("-1\n");
        }
    }
    return 0;
}
