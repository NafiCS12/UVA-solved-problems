#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float tgu,t,tgf,tdu,tdf,dx,dy,rg,rd,gx,gy,hx,hy;
    while(scanf("%d",&n)!=EOF)
    {
    scanf("%f %f %f %f",&gx,&gy,&dx,&dy);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&hx,&hy);
        tgu = pow((hx-gx),2);
        tgf = pow((hy-gy),2);
        rg = sqrt(tgu+tgf);
        tdu = pow((hx-dx),2);
        tdf = pow((hy-dy),2);
        rd = sqrt(tdu+tdf);

    }
    if(2.0*rg<=rd)
            {
            printf("The gopher cannot escape.\n");
            }
        else
        {
            printf("The gopher can escape through the hole at (%.3f,%.3f).\n",hx,hy);
        }
    }
return 0;
}
