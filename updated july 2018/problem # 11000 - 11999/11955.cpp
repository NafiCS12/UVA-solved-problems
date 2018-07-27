#include<stdio.h>
#include<string.h>
long min(int var1,int var2)
{
    if(var1<var2)
        return var1;
    return var2;
}
long C(int n,int r)
{
    long ans = 1;
    r = min(r, n - r);
    int i;
    for (i=1;i<r+1;i++)
    {
        ans*= (n - r + i);
        ans/=i;
    }

    return ans;
}


int main()
{   int s1[20],s2[20],t,i,pow;
    long sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("(%s+%s)^%d",&s1,&s2,&pow);
        sum = 0;
        for(i=0;)

    }
    return 0;
}
