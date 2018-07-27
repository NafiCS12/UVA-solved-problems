#include <stdio.h>

char num[1111];

int main()
{
        int t, n, i, j, mod, d;
        for(scanf("%d",&t);t;t--)
        {
                mod = 0;
                scanf("%s%d",num,&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&d);
                        if(mod==0)
                                for(j=0;num[j];j++)
                                        mod = (mod*10 + (num[j]-'0'))%d;
                }
                if(mod==0)
                        printf("%s - Wonderful.\n",num);
                else
                        printf("%s - Simple.\n",num);
        }
        return 0;
}
