#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,t,y,u;
    while(scanf("%d %d %d",&a,&b,&c) && a!=0 &&b!=0 &&c!=0)
        {
        t = pow(a,2);
        y = pow(b,2);
        u = pow(c,2);
         if(t==(y+u) || u==(t+y) || y==(u+t))
         {
             printf("right\n");
         }

         else
            printf("wrong\n");

        }
    return 0;
}
