#include<iostream>
#include<cmath>

#include<iomanip>
#define pi 3.14159
using namespace std;

int main()
{
    float D,V,r;
    while((cin>>D>>V) && D!=0 && V!=0)
    {
       r = D*D*D-((6.0*V)/pi);
       r = pow(r,1.0/3.0);
       cout<<fixed;
       cout<<setprecision(3)<<r<<endl;
    }
    return 0;

}
