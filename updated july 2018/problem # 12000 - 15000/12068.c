#include <stdio.h>

int gcd(int x,int y)
{
    if( (x%y)==0 )
        return y;
    else
        return gcd(y,x%y);
}

int main()
{
    int x,inc=1,mul=1,t,r=0,n,i,j,k,a[20],res,l,h;
    scanf("%d",&t);

    for(x = 0; x<t ; x++)
    {
        r = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(j=0;j<n;j++)
        {
            mul = mul*a[j];
        }

        for(k=0;k<n;k++)
        {
            r = r + (mul/a[k]);
        }

        l = n*mul;
        h = r;

        res = gcd(l,h);

        l = l/res;
        h = h/res;

        printf("Case %d: %d/%d\n",inc,l,h);

        inc ++;
    }

    return 0;
}
