#include<stdio.h>
#include<math.h>

#define Pi acos(-1)

int main()
{
	int T,L,i,W;
    double Wf,r,At,A,Ag;

	scanf("%d",&T);

	for(i=0;i<T;i++)
	{
		scanf("%d",&L);

		W = (6 * L);

		Wf = W/10.0;

		r = 0.2*L;

		A = Pi * r * r;

		At = L * Wf;

		Ag = At - A;

		printf("%.2lf  %.2lf\n",A,Ag);
	}

	return 0;
}
