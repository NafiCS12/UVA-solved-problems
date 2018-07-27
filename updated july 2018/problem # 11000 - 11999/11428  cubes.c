#include<stdio.h>
#include<math.h>

int main()

{

    int N;
    while( scanf("%d",&N) == 1 )
    {
        long long int i,j,k;
        if(N==0)
            break;
        if(N==1)
            printf("No solution\n");
        else
        {
            long long int n = (long long int)sqrt(N);
            for(i=2;i<=n;i++)
            {
                k = 0;
                for(j=1;j<i;j++)
                {
                    if( (i*i*i)-(j*j*j) == N )
                    {
                        k = 1;
                        break;
                    }
                }
                if( k == 1) /// without this check, the loop variable k over-iterates and in few cases skips solutions
                    break;

            }
        }
        if(k ==1)
        {
            printf("%lld %lld\n",i,j);
        }
        else
        {
            printf("No Solution\n");
        }
    }

    return 0;
}

