#include <cmath>
#include <cstdio>
#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
#define GI ({int _t; scanf("%d", &_t); _t;})
#define FOR(i, a, b) for (int i=a; i<b; i++)
#define REP(i, a) FOR(i, 0, a)
#define sz size()
#define pb push_back
#define cs c_str()
#define DBGV(_v) { REP(_i, _v.sz) { cout << _v[_i] << "\t";} cout << endl;}

int inf = 1<<26;

void floyd(int mat[100][100],int size)
{
   for(int k=0;k<size;k++)
     for(int i=0;i<size;i++)
             for(int j=0;j<size;j++)
                     mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);

     }

int ff(string ports[],string str,int m)
{
    REP(i,m) if(ports[i]==str) return i;
    return -1;
}

int main()
{

    int mat[100][100];
    int test;
    cin>>test;
    int k=1;
 cout<<"SHIPPING ROUTES OUTPUT\n";
    while(test--)
    {
        int m,n,p;
        /// m : ports .. n : total pairs .. p : queries
        cin>>m>>n>>p;
     REP(i,m)
             REP(j,m) mat[i][j]=inf;

    string ports[m];
    REP(i,m){cin>>ports[i];}

   REP(i,n)
   {       string str1,str2;
          cin>>str1>>str2;
           mat[ff(ports,str1,m)][ff(ports,str2,m)]=1;
           mat[ff(ports,str2,m)][ff(ports,str1,m)]=1;

           }
    floyd(mat,m);
    cout<<"\nDATA SET  "<<k++<<"\n\n";
    REP(i,p)
    {
            int price;
            string str1,str2;
            cin>>price>>str1>>str2;
             if(mat[ff(ports,str1,m)][ff(ports,str2,m)]==inf) cout<<"NO SHIPMENT POSSIBLE"<<endl;
           else  cout<<"$"<<price*mat[ff(ports,str1,m)][ff(ports,str2,m)]*100<<endl;

            }

     }
    cout<<"\nEND OF OUTPUT\n";
    return 0;
}
