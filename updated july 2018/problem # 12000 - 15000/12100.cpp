#include <cstdio>
const int maxn = 101;
int t, n, m, time;
int q[maxn*maxn];

int print()
{
	int front = 0, rear = n;
	while (1)
    {
		int max = q[front];
		for (int i = front; i < rear; i++)
			if (q[i] > max)
			{
				if (front == m)
					m = rear;
				q[rear++] = q[front++];
				break;
			}
			else if (i == rear - 1)
			{
				time++;
/*				printf("%d %d\n", time, q[front]);
*/				if (front == m)
					return time;
				front++;
			}
	}
}

int main() {
	scanf("%d", &t);
	while (t--)
    {
		time = 0;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			scanf("%d", &q[i]);
		printf("%d\n", print());
	}//while

}
