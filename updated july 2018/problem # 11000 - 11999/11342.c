#include<stdio.h>
#include<math.h>

int main()
{

    int c,i,j,k,t;
    long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        c = 0;
       if(n==3)
        {
            printf("1 1 1\n");
        }
        if( n!=3 && (n%4)==3)
        {
            printf("-1\n");
        }

        else
        {
            long int x = ceil(sqrt(n));
            for(i=0;i<x;i++)
            {
                if(c==1)
                        break;

                for(j=i+1;j<=x;j++)
                {
                    if(c==1)
                            break;

                    for(k=j+1;k<=x;k++)
                    {   if(c==1)
                            break;
                        if( ( (i*i)+(j*j)+(k*k))==n )
                        {   c = 1;
                            printf("%d %d %d\n",i,j,k);
                        }

                    }

                }

            }
        }
    }
    return 0;
}
