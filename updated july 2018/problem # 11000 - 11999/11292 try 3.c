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
    {   int h[20005]]{0},t[20005]={0},n,m,f;
        for(m=0;m<x;m++) {scanf("%d",&h[m]);}
        for(n=0;n<y;n++) {scanf("%d",&t[n]);}
        if(x>y)
        {
            printf("Loowater is doomed!\n");
        }
        else
        {
            int flag=0,k,i,j;
            long int c;
            qsort(t,y,sizeof(int),&comp);
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
                else
                    printf("Loowater is doomed!\n");
            }
    }
    return 0;
}