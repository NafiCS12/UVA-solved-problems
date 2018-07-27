#include<stdio.h>

int main()

{
    int t,r,f;

    while(scanf("%d",&t) && t!=0)
    {
        r = (t-1);

        f = r/2;

        printf("%d\n",f);
    }

    return 0;
}
