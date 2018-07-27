#include<stdio.h>

int main()
{
    int i,L,H,T,W;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d %d",&L,&H,&W);
        if(L<=20 && H<=20 && W<=20)
          {
            printf("Case %d: good\n",i+1);
          }
        else
            printf("Case %d: bad\n",i+1);
    }
 return 0;
}
