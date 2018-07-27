#include<stdio.h>
#include<stdlib.h>
int  n,color[101], a[101][101],z;
/// color[i] == 1 means i'th vertex has been visited,
///          == 0 means i'th vertex has not been visited yet
void dfs(int v)
{
	int i;

	color[v] = 1;

    for (i = 1; i <= n; i++)
    {
        if (a[v][i]==1 && color[i]==0)
        {
            dfs(i);
        }
    }

}
int main()
{
	int u, v, i, j, k, t, m, l, cnt;
	scanf("%d", &t);
	while (t--)
	{
		cnt = 0;

		scanf("%d %d %d", &n, &m, &l);

		memset(a, 0, sizeof(a));
		memset(color, 0, sizeof(color));

		for (i = 0; i<m; i++)
		{
			scanf("%d %d", &u, &v);
			a[u][v] = 1;
		}

		for (k = 0; k<l; k++)
		{
			scanf("%d", &z);
			dfs(z);
			for (i = 1; i <= n;i++)
            {
                if ( color[i] == 1 )
                {
                    cnt++;
                }
            }
			printf("%d\n", cnt);
		}
	}
	return 0;
}
