#include <cstdio>
#include<iostream>
#include<map>

using namespace std;
#define N 500096
int Parent[N];
int ans[N];

int Find_Parent(int a)
{
    if(Parent[a]==a)   return a;
    return Parent[a]=Find_Parent(Parent[a]);
}
int Union(int a,int b)
{
    int u=Find_Parent(a),v=Find_Parent(b);
    if(u!=v)    Parent[v]=u;
    if(u!=v)    ans[u]+=ans[v];
    return ans[v]=ans[u];
}
int main()
{
    int t;
    cin>>t;
    string a,b;
    int f;

    while(cin>>f)
    {
        map<string,int>m;
        int k = 0;
        for(int i = 1; i <= f*2; i++)
        {
            Parent[i] = i;
            ans[i] = 1;
        }

        while(f--)
        {
            cin>>a>>b;
            if(m[a]==0) m[a]=++k;
            if(m[b]==0) m[b]=++k;
            cout<<Union(m[a],m[b])<<endl;
        }

    }

}
