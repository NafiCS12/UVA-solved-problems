#include<stdio.h>

int main()
{
    int i,a,b,c,T;
    scanf("%d",&T);
        for(i=1;i<=T;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
                if((a+b>c) && (b+c>a)&&(a+c>b))
                {
                    if(a==b==c)
                        printf("Case %d: Equilateral\n",i);
                    else if((a/b)==(b/c)!=(c/a) || (b/c)==(c/a)!=(a/b) || (a/b)==(c/a)!=(b/c))
                        printf("Case %d: Isosceles\n",i);
                    else if((a/b)!=(b/c)!=(c/a))
                        printf("Case %d: Scalene\n",i);
                }
                else
                    printf("Case %d: Invalid\n",i);
        }
return 0;
}
