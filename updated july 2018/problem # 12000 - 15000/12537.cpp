#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int N,x[200001],y[200001];
double a_dis[200001],b_dis[200001];
int ax,ay,bx,by,Q,R1,R2;

int BS (int R,double dis[])
{
    int left = 0, right = N-1;
    while (left != right){
        int mid = (left+right+1)/2;
        if (dis[mid] > R) right = mid-1;
        else left = mid;
    }
    return left+1;
}

int main()
{

    int Case = 1;
    while (scanf("%d",&N)){
        if (!N) break;
        for (int i=0; i<N; i++) scanf("%d %d",&x[i],&y[i]);
        scanf("%d %d %d %d %d",&ax,&ay,&bx,&by,&Q);
        for (int i=0; i<N; i++) {
            a_dis[i] = sqrt (pow(x[i]-ax,2) + pow(y[i]-ay,2));
            b_dis[i] = sqrt (pow(x[i]-bx,2) + pow(y[i]-by,2));
        }
        sort (a_dis,a_dis+N);
        sort (b_dis,b_dis+N);

        printf("Case %d:\n",Case++);

        while (Q--){
            scanf("%d %d",&R1,&R2);
            int ans = N - BS(R1,a_dis) - BS(R2,b_dis);
            if (ans >= 0) printf("%d\n",ans);
            else printf("0\n");
        }
    }
    return 0;
}
