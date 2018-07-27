#include<stdio.h>
#include<math.h>

int main()
{
    int i,cN=0,N,event[1001],e=0,z=0,rs=0;

    while(scanf("%d",&N) !=EOF)
    {
        if(N==0)
            break;

        cN=cN+1;

        rs=0; e=0; z=0;

        for(i=0;i<N;i++)
        {
            scanf("%d",&event[i]);

            if(event[i]==0)
            {
                z = z+1;
            }
            else
            {
                e = e+1;
            }

        }
        rs = e - z ;

        printf("Case %d: %d\n",cN,rs);
    }

    return 0;
}

