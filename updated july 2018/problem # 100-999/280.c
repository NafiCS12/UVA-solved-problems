#include <stdio.h>
#include <string.h>

int n, d[101][101], v[101];

void find(int now)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        if (d[now][i] && !v[i])
        {
          v[i] = 1;
          find(i);
        }
    }

}
int main()
{
    while (scanf("%d", &n) && n)
    {
        int i, j;

        memset(d, 0, sizeof(d));

        while (scanf("%d", &i) && i)
        {
            while (scanf("%d", &j) && j)
            {
                 d[i][j] = 1;
            }
        }

        scanf("%d", &i);

        while (i--)
        {
          scanf("%d", &j);

          memset(v, 0, sizeof(v));

          find(j);
          int cnt = 0;

          for (j = 1; j <= n; j++)
            cnt += !v[j];

          printf("%d", cnt);

          for (j = 1; j <= n; j++)
            if (!v[j]) printf(" %d", j);

          puts("");
        }
    }

    return 0;
}
