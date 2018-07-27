#include<stdio.h>


int main()
{
    int H1,H2,M1,M2,eh,eh1,eh2,rm,fm,fh,rh;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2) && H1!=0 && M1!=0 && H2!=0 && M2!=0 )
    {
        if(H1==H2)
        {
            if(M2==M1)
                printf("1440\n");
            else if(M2>M1)
                fm=1440+(M2-M1);
            printf("%d\n",fm);
            else if(M1>M2)
                fm=(1440-(M1))+M2;
            printf("%d\n",fm);
        }
        if(H1>12)
            eh1=H1-12;
        if(H2<12)
            eh2=H1+12;
        fh=eh2-eh1;
        if(M2<M1)
        {
            rh=fh-1;
            rm=((rh*60)+60+(M2-M1));
            printf("%d\n",rm);

        }

        else if(M2>M1)
        {
            rm=(fh*60+(M2-M1));
            printf("%d\n",rm);
        }


    }
    return 0;
}
