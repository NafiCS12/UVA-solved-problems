#include <stdio.h>
int a,b,c;
int f(int x)
{
	return a*x*x + b*x + c;
}
int main()
{
	int d,l,i,count;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
	while(a||b||c||d||l)
	{
		count = 0;
		for(i=0;i<=l;i++)
			if(f(i)%d==0)
				count++;
		printf("%d\n",count);
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
	}
	return 0;
}
