#include<iostream>
#include<cstdio>
using namespace std;

long memo[41];

long solve(int inp)
{
		if (inp == 0)
        {
			return 1;
		}

        if(inp==1)
		{
			return 1;
		}

		if( inp==2 )
		{
			return 5;
		}

		if(memo[inp] != 0 )
		{
			return memo[inp];
		}


		memo[inp] = solve(inp-1) + 4*solve(inp-2) + 2*solve(inp-3);
		return memo[inp];
}

main()
{

		int t;
		scanf("%d",&t);
		while(t-- !=0 )
		{
			int n;
			scanf("%d",&n);

			long res = solve(n);

			printf("%ld\n",res);
		}
}




