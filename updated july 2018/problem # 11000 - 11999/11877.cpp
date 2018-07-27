#include<stdio.h>
#include<math.h>
int main()
{

	int i,r,t;

		while(scanf("%d",&r) && r!=0)
    {   t = 0;


		while(r>=3)
		{
			i = r/3;
			t = t + (i);
            r = r%3 + i;
		}
		if(r==2)
            t++;

		printf("%d\n",t);

	}
return 0;

}
