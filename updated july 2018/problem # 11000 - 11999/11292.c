#include<stdio.h>
#include<stdlib.h>
int comp(const void *i,const void *j)
{
     return  *(int* )i- *(int *)j  ;
}


int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)==2 && x!=0 && y!=0)
    {
        int flag=0,k,f=0,i,j,h[100],t[100];
        long int c;
        while(x--)  scanf("%d",&h[x]);
        while(y--)  scanf("%d",&t[y]);
        /*qsort(t,y,sizeof(int),comp);*/
        if(x>y)
        {
            f = 1;
            printf("Loowater is doomed!\n");
        }

        else
        {
            qsort(t,y,sizeof(int),comp);
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

            else if(f)
            {
                printf("Loowater is doomed!\n");
            }
        }
    }
}
