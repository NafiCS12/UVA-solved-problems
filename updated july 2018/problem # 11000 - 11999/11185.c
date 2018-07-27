#include<stdio.h>
#include<math.h>

int main()
{
    int i=0,r=0,N,t,p,j,l,k,u;
    scanf("%d",&N);
        if(N>0)
    {
        t=N;
     for(j=0;j<100;j++)
        {
            p = t%3;
            t = t/3;
            if(t==0)
            {
                l=j;
                break;
            }
         }
        for(k=l;k>=0;k--)
        {
         u = pow(10,k);
         k = p*u;
         r = r+k;
        }
        printf("%d\n",r);
   }

return 0;
}
