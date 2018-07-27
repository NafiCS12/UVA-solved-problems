#include<iostream>
using namespace std;


int main()
{
int inc=1,j,k,i,r,m,t,n,a[101];
cin>>t;
    for(j = 0 ; j< t ; j++)
        {
            cin>>n;
                for(i = 0 ; i< n ; i++)
                    {
                        cin>>a[i];

                    }

                    m = a[1]-a[0];

                for(k=1;k<n-2;k++)
                {
                    r = a[k+1]-a[k];
                        if(r>m)
                            m = r;
                }

           cout<<"Case : "<<inc<<m<<endl;
           inc++;
        }


return 0;
}
