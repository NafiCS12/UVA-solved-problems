#include<cstdio.h>
#include<algorithm>

using namespace std;


/*long int cost(long int ar[],int lim)
{

    int i;
    long int c=0;
    for(i=0;i<lim;i++)  c+=ar[i];

    return c;
}*/
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)==2 && x!=0 && y!=0)
    {
        int flag=0,k,f=1,i,j,h[100],t[100];
        long int c;
        while(x--)  scanf("%d",&h[x]);
        while(y--)  scanf("%d",&t[y]);
        sort(t,t+y);
        if(x>y) {   f = 0;printf("Loowater is doomed!\n");  break;}

        else
        {
            for(i=0;i<y;i++)
            {   for(k=0;k<x;k++)
                {    if(t[i]<h[k])
                    {
                        flag+=1;
                    }
                }
            }
            if(flag==0)
            {
                f = 1;
                c=0;
                for(i=0;i<x;i++)
                {
                    c+=t[i];
                }

                printf("%ld\n",c);
            }

            else
            {
                f = 0;
                printf("Loowater is doomed!\n");
            }
        }
    }
}
