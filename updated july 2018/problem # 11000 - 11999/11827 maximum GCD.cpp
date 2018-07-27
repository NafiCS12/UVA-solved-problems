#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>

using namespace std;

int gcd(int x,int y)
{
    if( x==1 || y==1)
    {
        return 1;
    }
    else if( (x%y)==0 )
    {
        return y;
    }

    else
        return gcd(y,x%y);

}
int main()
{
    int temp,tCase;
    string Numbers;

    cin >> tCase;
    getline(cin, Numbers);

    // cout << "total test cases "<< tCase << endl ;

    for(int i=0;i<tCase;i++)
    {
        getline(cin, Numbers);
        istringstream is(Numbers);

        int M = 0, ans = 0;

        int numbersInArray[101];

        while( is >> numbersInArray[M] )
        {
            M ++;
        }

        for(int i = 0; i<M ; i++)
        {
            for(int j = i+1 ; j<M ; j++)
            {
                ans = max( ans ,  gcd( numbersInArray[i], numbersInArray[j] ) ) ;
            }
        }
        cout<< ans << endl ;

    }

}
