#include<stdio.h>
#include<math.h>


int main()
{
	int t;

	float a,x,y;
	float dmin,dmax,r,result;

	scanf("%d",&t);

	while(t--)
	{

		scanf("%f %f %f",&x,&y,&r);

		a = sqrt(x*x + y*y);

		dmax = r + a;
		dmin = r - a;

		printf("%.2f %.2f\n",dmin,dmax);
	}

}
