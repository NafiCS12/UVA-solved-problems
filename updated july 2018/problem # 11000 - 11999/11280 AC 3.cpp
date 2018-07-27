#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
using namespace std;
#define CL(x,v); memset(x,v,sizeof(x));
#define INF 0x3f3f3f3f
#define LL long long
#define REP(i,r,n) for(int i=r;i<=n;i++)
#define RREP(i,n,r) for(int i=n;i>=r;i--)

const int MAXN=105;
map<string,int> S;
int n,m;
struct Edge{
    int u,v,cost;
};
vector<Edge> edges;
vector<int> G[MAXN];
struct node{
    int u,cost,ti;
    bool operator <(const node& a)const{
        return cost>a.cost;
    }
};

int V[MAXN][15];
int dijkstra(int time)
{
    priority_queue<node> Q;
    Q.push((node){1,0,0});
    memset(V,-1,sizeof(V));
    V[1][0]=0;
    node t,tt;
    while(!Q.empty())
    {
        t=Q.top();
        Q.pop();
        if(t.u==n)return t.cost;
        int u=t.u;
        int cost=t.cost;
        int ti=t.ti;
        for(int i=0;i<G[u].size();i++)
        {
            Edge e=edges[G[u][i]];
            int v=e.v;
            if(ti+1<=time)
            {
                if(V[v][ti+1]==-1|| V[v][ti+1]>t.cost+e.cost )
                {
                    tt.u=v;
                    tt.cost=t.cost+e.cost;
                    tt.ti=t.ti+1;
                    V[tt.u][tt.ti]=tt.cost;
                    Q.push(tt);
                }
            }
        }
    }
    return -1;
}
int main()
{
    int N;
    scanf("%d",&N);
    for(int cas=0;cas<N;cas++)
    {
        if(cas)
        printf("\n");
        printf("Scenario #%d\n",cas+1);
        scanf("%d",&n);
        char ch[30];
        char ch1[30];
        int c;
        S.clear();
        REP(i,1,n)
        {
            scanf("%s",ch);
            S[string(ch)]=i;
        }
        REP(i,1,n)G[i].clear();
        edges.clear();
        scanf("%d",&m);
        REP(i,1,m)
        {
            scanf("%s %s %d",ch,ch1,&c);
    //        printf("---%s---\n",ch);
    //        printf("---%s---\n",ch1);
            int a=S[string(ch)];
        //    printf("---a--%d---\n",a);
            int b=S[string(ch1)];
            edges.push_back((Edge){a,b,c});
            int m=edges.size();
            G[a].push_back(m-1);
        }
        int q;
        scanf("%d",&q);
        while(q--)
        {
            int time;
            scanf("%d",&time);
            int ans=dijkstra(time+1);
            if(ans==-1)
                printf("No satisfactory flights\n");
            else printf("Total cost of flight(s) is $%d\n",ans);
        }
    }
    return 0;
}
