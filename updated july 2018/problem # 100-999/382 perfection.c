#include<stdio.h>

int main()
{
    long long int s=0,i,t=0,k;
    long long int n;

    printf("PERFECTION OUTPUT\n");

    while(scanf("%lld",&n) && n!=0)
    {   t=0;
        if(n>0)
        {
            k = n/2;
            for(i=1;i<=k;i++)
            {
                if(n%i==0)
                {

                    t = t+i;
                }
            }
            if(t==n)
            {
                printf("%5lld  PERFECT\n",n);
            }
            else if(n<t)
            {
                printf("%5lld  ABUNDANT\n",n);
            }
            else if(n>t)
            {
                printf("%5lld  DEFICIENT\n",n);
            }
        }

    }
    if(n==0)
            printf("END OF  OUTPUT\n");

    return 0;
}


