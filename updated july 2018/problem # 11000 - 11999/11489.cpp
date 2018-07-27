#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<long long int,int>Jack;
    long long int number;
    int n,m;
    while( cin>>n>>m)
    {
            if(n==0 && m==0) {break;}

             //1st step
                for(int i=0;i<n;i++)
                {
                    cin>>number;
                    Jack[number]=1;
                }
                int Common_Occurence=0;
                //2nd step
                for(int i=0;i<m;i++)
                {
                    cin>>number;
                  //  if(  ( Jack.find( number) ) != Jack.end() )
                  if(Jack[number] == 1)
                    {
                        Common_Occurence++;
                    }
                }
                Jack.clear();
                cout<<Common_Occurence<<endl;
                //Jack.erase((Jack.begin(),Jack.end()));
    }

}
