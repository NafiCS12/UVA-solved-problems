#include<iostream>
using namespace std;
int main()
{

    unsigned long long int N;
    int t,i;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>N;
        if ( (N%2) == 0 )
        {
            cout<<(N/2)<<endl;
        }

        else if( (N%2) ==1 )
        {
            N = N-1;
            cout<<(N/2)<<endl;;
        }

    }

}
