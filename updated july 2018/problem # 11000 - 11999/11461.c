#include<stdio.h>
#include<math.h>

int main()

{
    int a,b,n,x,count=0;
    float y;
    while(scanf("%d %d",&a,&b) && a!=0 && b!=0)
{   count = 0;
    for(n=a;n<=b;n++)
    {

        x = sqrt(n);
        y = sqrt(n);
            if(x==y)
            {
                count = count + 1;
            }
    }
    printf("%d\n",count);
    }
return 0;

}
