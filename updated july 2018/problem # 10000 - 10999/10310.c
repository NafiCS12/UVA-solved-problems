#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float tg,td,dx,dy,rg,rd,gx,gy,hx,hy;
    while(scanf("%d",&n)!=EOF)
    {
    scanf("%f %f %f %f",&gx,&gy,&dx,&dy);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&hx,&hy);
        tg =pow((hx-gx),2)+pow((hy-gy),2);
        rg = sqrt(tg);
        td =pow((hx-dx),2)+pow((hy-dy),2);
        rd = sqrt(td);

    }
    if(rg>(rd/2.0))
            {
             printf("The gopher can escape through the hole at (%.3f,%.3f).\n",hx,hy);
            }
        else
        {
            printf("The gopher cannot escape.\n");
        }
    }
return 0;
}
