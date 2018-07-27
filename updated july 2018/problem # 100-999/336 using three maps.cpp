#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
int main()
{
    long long nc,i,pair1,pair2,node,ttl,number,l,x,diff,cs=1;
    vector<long long>v[100000];
    map<long long,int>distance;
    map<long long,int>visit;
    map<long long,int>dif;
    queue<long long>q;
    while(cin>>nc)
    {
        if(nc==0)   return 0;
        diff=0;
        dif.clear();
        for(i=0;i<99900;i++)
        v[i].clear();
        distance.clear();
        for(i=0;i<nc;i++)
        {
            cin>>pair1>>pair2;

            v[pair1].push_back(pair2);
            v[pair2].push_back(pair1);
            if(dif[pair1]!=1)
            {
                dif[pair1]=1;
                diff++;
            }
            if(dif[pair2]!=1)
            {
                dif[pair2]=1;
                diff++;
            }
        }
        /*cout<<diff<<endl;*/
        while(cin>>node>>ttl)
        {
            if(node==0 && ttl==0)
            break;
            /*base case */
            number=0;
            visit.clear();
            visit[node]=1;
            distance[node]=0;
            q.push(node);

            /* digging wider */

            while(!q.empty())
            {
                x=q.front();
                q.pop();
                l=v[x].size();
                for(i=0;i<l;i++)
                {
                    if(visit[v[x][i]]!=1)
                    {
                        distance[v[x][i]]=distance[x]+1;
                        if(distance[v[x][i]]>ttl)
                            break;
                        number++;
                        visit[v[x][i]]=1;
                        q.push(v[x][i]);
                    }
                }
            }

        cout<<"Case "<<cs<<": "<<diff-number-1<<" "<<"nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
        cs++;
        }
    }
}
