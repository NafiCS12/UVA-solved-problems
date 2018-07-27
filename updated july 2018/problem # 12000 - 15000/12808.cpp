//12808
#include<cmath>
#include<cstdio>

double VerticalDistance(double H,double V)
{
    double t = 2.0*H;
    t = t/9.81;
    t= sqrt(t);
    double ans = V*t;
    return ans;
}

int main()
{
    int tcase;
    double x,l,d,h,v;
    scanf("%d",&tcase);
    for(int i=0;i<tcase;i++)
    {
        scanf("%lf %lf %lf %lf",&l,&d,&h,&v);
        l = l/1000.0;  d /= 1000.0; h /= 1000.0; v /= 1000.0;
        x = VerticalDistance(h,v);

   //    printf("%lf\n",x);


        if (fabs(x - d) < 0.5 || fabs(x - (d +l)) < 0.5)
		{
		    puts("EDGE");
		}
		else if (x<d || x>d+l)
        {
              printf("FLOOR\n");
        }
        else
        {
            printf("POOL\n");
        }

    }
}
