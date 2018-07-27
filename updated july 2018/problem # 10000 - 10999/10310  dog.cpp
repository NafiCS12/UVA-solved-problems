#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double dist(double ox,double oy,double dx,double dy)
{
    return (dx-ox)*(dx-ox) + (dy-oy)*(dy-oy);
}

int main()
{
    int i,n;
    double dx,dy,gx,gy;
    double hx,hy;
    bool c;
    while(scanf("%d %lf %lf %lf %lf",&n,&gx,&gy,&dx,&dy)==5 )
    {
        c = true;
        for( i = 0 ; i < n ; i++)
        {
            scanf("%lf %lf",&hx,&hy );
            if(c)
            {
                if( dist(gx,gy,hx,hy)*4.0 <= dist(dx,dy,hx,hy))
                {

                    printf("The gopher can escape through the hole at (%.3f,%.3f).\n",hx,hy);

                    c = false;
                }
            }
        }
        if( c == true )
            printf( "The gopher cannot escape.\n" );
    }
    return 0;
}
