#include<stdio.h>


int main()

{
	float h,m,r;

	while( scanf("%f:%f",&h,&m) == 2 )
	{
		h = h*30.0;
		m = 5.5*m;

		if(h>m)
		{
			r = h - m ;
		}
		else
		{
			r = m - h ;
		}


		if(r>180.0)
		{
			r = 360.0 - r ;
		}

		printf("%.2f\n",r);
	}

    return 0;
}
