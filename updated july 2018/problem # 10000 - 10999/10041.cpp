#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,p=0,r,a[20],i,j,k,u,s,x=0;
    scanf("%d",&t);
   for(j=0;j<t;j++)
   {
    scanf("%d",&r);
    for(i=0;i<r;i++)

    { p=0;
    scanf("%d",&a[i]);
    }
     for(i=0;i<r;i++)
     {x = 0;
        x = abs(a[i+1]-a[i]);
        p = p+x;

     }printf("%d\n",p);
    }
return 0;
}
