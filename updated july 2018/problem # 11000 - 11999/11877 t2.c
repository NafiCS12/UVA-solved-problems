#include<stdio.h>
#include<math.h>

int main()
{   int p=0,c,i,n;
    int t=0,s,r=0,a;
    while(scanf("%d",&n) && n!=0)
    {

        t = n/3;
        p = n%3;
        while(t>1)
        {
            r = t/3;

        }
        a=p+r+t;
        printf("%d\n",a);
    }
return 0;
}
