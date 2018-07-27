#include<iostream>
using namespace std;

int t(int A,int B,int C)
{
    int c = 0;
    if( A + B > C && B + C > A && A + C > B )
    {
        return 1;
    }
    else
        return 0;

}
int main()
{
        while(1)
        {
            int res=1,T,i,j,k;
            long long int s=0;
            int a[100]={0};
            cin >> T;
            for(i=1;i<=T;i++)
                {
                    a[i]=i;
                }

            for(i=0;i<T-2;i++)
            {
                for(j=0;j<T-1;j++)
                {
                    for(k=0;k<T;k++)
                    {
                        res = t(a[i],a[j],a[k]);
                        s = s + res;

                    }
                }
            }
            cout<<s<<endl;
        }
        return 0;

}
