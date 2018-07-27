#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<cstdio>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define Maxn 20010
#define Maxm 40010
#define LL long long
#define Abs(x) ((x)>0?(x):(-x))
#define lson(x) (x<<1)
#define rson(x) (x<<1|1)
#define inf 1e15
#define lowbit(x) (x&(-x))
#define clr(x,y) memset(x,y,sizeof(x))
#define Mod 1000000007
using namespace std;
int head[Maxn],vi[Maxn],dfn[Maxn],low[Maxn],num[Maxn],is[Maxn],Stack[Maxn],top,e,lab;
int n,m;
LL val[Maxn],need[Maxn],cnt;
struct Edge{
    int u,v,next,f;
    LL val;
}edge[Maxm];
void init()
{
    clr(head,-1);
    clr(vi,0);
    clr(is,0);
    clr(need,0);
    clr(dfn,0);
    clr(low,0);
    clr(num,0);
    e=lab=cnt=0;
}
void add(int u,int v,LL val)
{
    //cout<<u<<" "<<v<<endl;
    edge[e].u=u,edge[e].v=v,edge[e].val=val,edge[e].f=0,edge[e].next=head[u],head[u]=e++;
}
void Tarjan(int u)
{
    int i,v,cc;
    ++cnt;
    vi[u]=1;
    dfn[u]=low[u]=++lab;
    Stack[++top]=u;
    for(i=head[u];i!=-1;i=edge[i].next){
        v=edge[i].v;
        if(edge[i].f) continue;
        edge[i].f=edge[i^1].f=1;
        if(!dfn[v]){
            cc=cnt;
            Tarjan(v);
            if(low[v]>dfn[u]){
                is[u]=1;
                num[v]=cnt-cc;
            }
            low[u]=min(low[u],low[v]);
        }
        else low[u]=min(low[u],dfn[v]);
    }
}
bool dfs(int u,LL nal)
{
    int i,v;
    need[u]=val[u];
    vi[u]=1;
    for(i=head[u];i!=-1;i=edge[i].next){
        v=edge[i].v;
        if(vi[v]) continue;
        if(!dfs(v,nal))
            return false;
        if(is[u]){
            if(num[v]*(cnt-num[v])*edge[i].val+need[v]>nal)
                need[u]+=num[v]*(cnt-num[v])*edge[i].val;
        }
        if(need[u]>nal)
            return false;
    }
    return true;
}
bool OK(LL x,int p)
{
    int i,j;
    for(i=0;i<=top;i++) vi[Stack[i]]=0;
    for(i=0;i<=top;i++) if(val[Stack[i]]>x){
        return false;
    }
    if(!dfs(p,x))
        return false;
    return true;
}
void solve()
{
    int i,j;
    LL ans=0;
    for(i=1;i<=n;i++) if(!dfn[i]){
        Tarjan(i);
        LL l,r,mid;
        l=0,r=inf;
        while(l<r){
            mid=(l+r)>>1;
            if(OK(mid,i))
                r=mid;
            else
                l=mid+1;
        }
        ans=max(l,ans);
        cnt=0;
        top=0;
    }
    printf("%lld\n",ans);
    return ;
}
int main()
{
    int i,j,u,v,t,Ca=0;
    LL cc;
    scanf("%d",&t);
    while(t--){
        init();
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++)
            scanf("%lld",val+i);
        for(i=1;i<=m;i++){
            scanf("%d%d%lld",&u,&v,&cc);
            add(u,v,cc);
            add(v,u,cc);
        }
        printf("Case %d: ",++Ca);
        solve();
    }
    return 0;
}
