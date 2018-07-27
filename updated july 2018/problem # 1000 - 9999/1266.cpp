# include <iostream>
# include <iomanip>
# include<cmath>
#include<cstdio>
using namespace std;


int main()
{
	int n, i, j, c;
	int a[15][15];
	//printf("Enter the size of the magic square : ");
	while (cin >> n)
	{//printf("\nThe magic square for %d x %d is :\n\n", n, n);
		j = (n + 1) / 2;
		//int a[][]=new int [n + 1][n + 1];
		i = 1;
		for (c = 1; c <= n * n; c++)
		{
			a[i][j] = c;
			if (c % n == 0)
			{
				i = (i + 1);
				goto loop;
			}
			if (i == 1)
				i = n;
			else
				i = i - 1;

			if (j == n)
				j = 1;
			else
				j = j + 1;
		loop:;
		}
		int sum = n* ((n*n) + 1);
		sum /= 2;
		printf("n=%d, sum=%d\n", n, sum);
		int spacecount = ceil( log10(n*n) );
		//cout << setw(spacecount);
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cout << setw(spacecount)<< a[i][j]<<" ";
			}

			printf("\n");
		}

	}
}
