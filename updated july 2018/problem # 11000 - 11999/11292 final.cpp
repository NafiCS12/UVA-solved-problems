#include<cstdio>
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
    {   int h[100],t[100],n,m,f;
        for(m=0;m<x;m++) {scanf("%d",&h[m]);}
        for(n=0;n<y;n++) {scanf("%d",&t[n]);}
        sort(t,t+y);
        if(x>y)
        {
            printf("Loowater is doomed!\n");
        }
        else
        {
            int flag=0,k,i,j;
            long int c;

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
                    c=0;
                    for(i=0;i<x;i++)
                    {
                        c+=t[i];
                    }
                    printf("%ld\n",c);
                }
            }
    }
}
