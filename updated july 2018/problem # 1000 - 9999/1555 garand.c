#include <stdio.h>
#include <string.h>

const int N = 1005;

int n, k[N];
double a, b[N], K;

double solve()
{
	K = 0;
	k[1] = 0; b[1] = a; k[2] = 1; b[2] = 0.0;

	for (int i = 3; i <= n; i ++)
    {
		k[i] = 2 * k [i - 1] - k[i - 2];
		b[i] = 2 * b[i - 1] - b[i - 2] + 2;
		if (K * k[i] + b[i] < 0)
			K = -b[i] / k[i];
	}

	return K * k[n] + b[n];
}

int main()
{
	while (~scanf("%d%lf", &n, &a))
	{
		printf("%.2lf\n", solve());
	}

	return 0;
}
