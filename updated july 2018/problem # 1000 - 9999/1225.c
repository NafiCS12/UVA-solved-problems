#include<stdio.h>

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
		int k,N,r,i,n,stor[10001];
		for(i=0;i<10;i++){ stor [ i ] = 0 ;}
		scanf("%d",&N);
		/*if(N<10)    stor[0]=0;*/
		for(i=1;i<=N;i++)
        {
            r  = i%10;
            stor[r]++;
            n = i/10;
            if(n!=0) stor[n]++;
        }

		for(k=0;k<10;k++)
		{
			printf("%d",stor[k]);
			if(k<=9)	printf(" ");
		}
		printf("\n");
	}
	return 0;
}
