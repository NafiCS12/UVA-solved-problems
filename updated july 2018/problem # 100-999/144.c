#include <stdio.h>

int N,k;
int students[26];

void calc()
{
	int i;
	int out=0, order_stu=1, order_out=0;

	for( i=1; i <= N; i++)
    {
		students[i]=0;
	}

	while( 1)
	{
		int done = 1;

		for( i=1; i <= N; i++)
		{
			if ( students[i]!=40 )
			{
				done=0;

				break;
			}
		}

		if ( done)
		{
			break;
		}

		if ( out==0 )
		{
			order_out++;

			if ( order_out > k )
			{
				order_out = 1;
			}

			out = order_out;
		}

		while ( students[order_stu] == 40 )
		{
			order_stu++;

			if (order_stu > N)
            {
				order_stu=1;
			}
		}

		if ( students[order_stu] + out > 40 )
        {
			out -= 40 - students[order_stu];

			students [order_stu] = 40;
		}

        else
        {
			students[order_stu] += out;
			out = 0;
		}

		if (students[order_stu] == 40)
		{
			printf("%3d", order_stu);
		}

		order_stu++;

		if (order_stu > N)
		{
			order_stu=1;
		}

	}

	printf("\n");
}

int main()
{
	while(1)
    {
		if (scanf(" %d %d", &N, &k)!=2)
		{
            break;
        }

		if (N==0)
        {
			break;
		}
		calc();
	}

	return 0;
}
