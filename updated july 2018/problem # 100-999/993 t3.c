#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void*b)
{
    return *(int*) a-*(int*)b;
}
int main()
{
    int a[100];
    int top,c,q,i;
    int n[] = {9,8,7,6,5,4,3,2};
    scanf("%d",&c);
    while(c-->0)
    {
            top = 0;
            scanf("%d",&q);
            if(q<=1)
                printf("%d\n",q);
            else
            {
                for(i = 0;i<8;i++)
                    while(q%n[i]==0)
                    {
                        q = q/n[i];
                        a[top++] = n[i];
                    }
                if(q!=1)
                {
                    printf("%d\n",-1);
                }
                else
                {
                    qsort(a,top,sizeof(int),&cmp);
                    for(i=0;i<top;i++)
                        printf("%d",a[i]);
                    printf("\n");
                }
            }
    }
    return 0;
}
