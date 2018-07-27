#include<stdio.h>
#include<math.h>

int main()
{
    int i,N,j,event[1001],e=0,z=0,rs;

    while(scanf("%d",&N) !=EOF)
    {
        if(N==0)
        {
            break;
        }


        for(i=0;i<N;i++)
        {
            scanf("%d",&event[i]);

            if(event[i]==0)
            {
                z = z+1;
            }
            else// if(event[i]!=0)
            {
                e = e+1;
            }

        }

        rs=e-z;
        printf("Case %d: %d",N,rs);

   }
       return 0;

}

