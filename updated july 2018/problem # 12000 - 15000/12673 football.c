#include<stdio.h>

int main()
{
    int i;
    long long int p=0,j,diff,rem=0,wc=0,res=0,N,G,S[10001],R[10001];
    while(scanf("%lld %lld",&N,&G)==2)
    {
        for(i=0;i<N;i++)
        {
            scanf("%lld %lld",&S[i],&R[i]);

            diff = S[i]-R[i];
            if(diff>1)  wc++;

            else
            {
                if(diff==0 && j>rem)        p++;

                else
                {
                    for(j=0;j<G;j++)
                    {
                        if(j+S[i]>R[i] && rem!=0)
                        {
                            wc++;
                            rem = G-j;
                            break;
                        }
                    }
                }
            }
        }
        res=3*wc+p;
        printf("%lld\n",res);



    }
    return 0;
}
