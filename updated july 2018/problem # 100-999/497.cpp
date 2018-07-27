#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    int N,t,tmp;
    scanf("%d",&t);
    vector<int> v;
   // int test[t] ;//= { 7, -13, 1, 3, 10, 5, 2, 4 };
    for(int i=1;i<=t;i++)
    {
        while(scanf("%d",&tmp)==1 )
        {
            v.push_back(tmp);
        }
      //  unique(v.begin(),v.end());
        int N = v.size();
        sort(v.begin(),v.end());
        int ans=0;
        vector<int>answ;
        for(int i=0;i<N-1;i++)
        {
            int temp = v[i];
            if(temp<v[i+1])
            {
                    answ.push_back(tmp);
            }

        }
        cout<< "Max hits: "<<answ.size() <<"\n";
        for(int k=0;k<answ.size();k++)
        {
            cout<< answ[k] <<"\n";
        }

    }


}
