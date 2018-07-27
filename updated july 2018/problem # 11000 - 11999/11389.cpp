#include<stdio.h>

int main()
{
    int mor[20]={0},even[20]={0},n,d,r,i,j;
    long int sum,diff,tk;
    long int kh;

    while(scanf("%d %d %d",&n,&d,&r) && n!=0 && d!=0 && r!=0 )
    {   kh = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&mor[i]);
        }

        for(i=0;i<n;i++)
        {
            scanf("%d",&even[i]);
        }

        for(j=0;j<n;j++)
        {
            tk = 1 ;
            sum = mor[j] + even[j];

            diff = sum - d;
            tk = r * diff ;
            kh = kh + tk;

        }
        printf("%ld\n",kh);
    }
return 0;
}
