#include<stdio.h>

void ExtractDigit(int num,int ar[])
{
    int tmp;

    while(num>0)
    {
        tmp = num%10;
        ar[tmp]++;
        num = num/10;
    }
}
int main()
{
	int testcase;
	scanf("%d",&testcase);

	while(testcase--)
	{
		int k,N,r,i,n,stor[10001];
		for(i=0;i<10001;i++){ stor [ i ] = 0 ;}

		scanf("%d",&N);
		/*if(N<10)    stor[0]=0;*/

		for(i=1;i<=N;i++)
        {
            ExtractDigit(i,stor);
        }

		for(k=0;k<10;k++)
		{
			printf("%d",stor[k]);
			if(k<9)	printf(" ");
		}

		printf("\n");

	}

	return 0;
}
