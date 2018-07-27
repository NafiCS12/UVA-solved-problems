using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<queue>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
int mat,m,N,tmp,inp,cases,x;
bool arr[2501][2501];
int vis[2501],cnt[2501];
void init()
{
    FOR(i,2501)
    FOR(j,2501)
    arr[i][j]=false;
}
bool init_visit()
{
    FOR(i,N)
    {
        cnt[i]=0;
        vis[i]=-1;
    }
}
void calc()
{
    queue<int> q;
    bool enter=false;
    q.push(inp);
    vis[inp]=0;
    cnt[0]++; // ???????
    while(!q.empty()) // dive
    {
        x=q.front();
        FOR(i,N)
        {
            if(vis[i]==-1 && arr[x][i])
            {
                enter=true;
                vis[i]=vis[x]+1;
                cnt[vis[i]]++;
                q.push(i);
            }
        }
        q.pop();
    }
    mat=1;
    m=cnt[1];
    for(int i=1;i<N;i++)
    {
        if(cnt[i]>m)
        {
            m=cnt[i];
            mat=i;
        }
    }
    if(enter)
    cout<<m<<" "<<mat<<endl;
    else cout<<"0\n";
}
int main()
{
    while(cin>>N)
    {
        init();
        FOR(i,N)
        {
            cin>>tmp;
            FOR(j,tmp)
            {
                cin>>inp;
                arr[i][inp]=true;
            }
        }
        cin>>cases;
        FOR(i,cases)
        {
            init_visit();
            cin>>inp;
            calc();
        }
    }
}
