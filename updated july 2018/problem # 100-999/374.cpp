#include<iostream>
using namespace std;

long bigMode(long base, long power, long reminder)
{

    if (power == 0)
    return 1;
    else if ((power % 2)==0)
    {
        long temp=bigMode(base,power/2,reminder);
         return ((temp % reminder) *(temp % reminder)) % reminder;
        //return (bigMode(base, power / 2, reminder)*bigMode(base, power / 2, reminder)) % reminder;
    }
   // return (bigMode(base, power - 1, reminder)*base%reminder) % reminder;
    else
	   return ((base % reminder)*(bigMode(base,power-1,reminder) % reminder)) % reminder ;
}

int main()
{

long result = 0, base, power, modulus;
while (cin>>base>>power>>modulus){
result = bigMode(base, power, modulus);
cout<<result<<endl;
}

return 0;
}
