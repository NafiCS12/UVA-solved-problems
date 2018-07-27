#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
        int timePeriod,n;
        vector<int>popes;
        scanf("%d",&timePeriod);
        scanf("%d",&n);
        for (int i = 0; i < n; ++i)
        {
            /* code */
            int t;
            scanf("%d",&t);
            popes.push_back(t);
        }//inpt dne
        int maxFrom=-1, maxTo=-1,maxSize=-1;
        for(unsigned int i = 0; i < popes.size(); i++)
        {
            int Start_year = popes[i];
            int finish_year = Start_year+timePeriod-1;
            //now i will try to find how many
            vector<int>::iterator it = upper_bound(popes.begin(),popes.end(),finish_year);
            int  exclusive_upper_index =  it-popes.begin();

            int mxLength = exclusive_upper_index-i;
            if(mxLength>maxSize)//update
            {
                maxFrom = Start_year; maxTo = *(it-1);
                maxSize = mxLength;
            }

        }
        printf("%d %d %d\n",maxSize,maxFrom,maxTo);




}
