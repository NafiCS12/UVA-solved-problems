#include<stdio.h>

int Is_triangle(int x,int y,int z)
{
	int flag = 0;
	if(  ( (x+y) > z ) && ( (x+z) > y ) && ( (y+z) > x )  ) 
	{
		flag = 1;

	}

	return flag;

}


int main()

{
	int t,a,b,c,res;

	scanf("%d",&t);
	while(t--)
	
	{
		scanf("%d %d %d",&a,&b,&c);
		res = Is_triangle(a,b,c);

		if(res ==1)
		{	printf("OK\n");
		}
		else if(res == 0)
		{	printf("Wrong!!\n");
		}

	}
}