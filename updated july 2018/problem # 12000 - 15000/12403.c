#include<stdio.h>
#include<string.h>

int main()
{
    int i,T;
    char a[1001];
    long K,r=0;

    scanf("%d",&T);

    for(i=0;i<T/2;i++)
    {
        scanf("%s",a);
        if(!strcmp(a,"DONATE"))

            scanf("%ld",&K);
            r = r+K;

        printf("%ld\n",r);
    }

    return 0;

}
