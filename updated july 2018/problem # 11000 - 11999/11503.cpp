#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;

int main()
{
    int  testcase;
    scanf("%d",&testcase);
    map<string,int>mp;
    mp.clear();
    int Friend=2;
    for(int i=1;i<=testcase;i++)
    {
        int f;
        string a,b;
        cin>>f;
        while(f--)
        {
            cin>>a>>b;
            if(mp[a]!=0 || mp[b]!=0)
            {
                Friend++;
            }
            cout<<Friend<<endl;
            mp[a]++;
            mp[b]++;
        }
    }
    return 0;
}
