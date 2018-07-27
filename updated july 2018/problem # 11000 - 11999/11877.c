#include<stdio.h>
#include<math.h>

int main()
{   int p=0,c,i,n,g=0;
    int t=0,s,r=0,a;
    scanf("%d",&n);
        t = n/3;
        p = n%3;
        while(t<1)
        {
            t = t/3;
            r = r+g;

        }
        a=p+r+t;
        printf("%d",a);

return 0;
}
