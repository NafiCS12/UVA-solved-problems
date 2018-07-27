#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,k,i,inp[40],j,avg,inc=0;
    cin>>n;
    if (n!=0)
    {






        for(i=0;i<n;i++)
    {
        cin>>inp[i];
        sum =+ inp[i];

    }
    avg = sum/n;
    for(j=n-1;j>=0;j--)

    { if(avg<inp[j])
            k = inp[j]-avg;
            inc =+ 1;
    }
    cout<< "Set #"<<inc<<"\n"<<"The minimum number of moves is "<<k;
    }
return 0;
}
