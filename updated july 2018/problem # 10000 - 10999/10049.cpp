#include<cstdio>
#include<iostream>
#include<vector>
#define sq(b) ((b) * (b))
using namespace std;
main()
{
    int n;

    while(scanf("%d",&n) && n!=0)
 //   for(int i=1;i<7;i++)
    {

     //  vector<int>a;


            int x=1;
            int ar[n];
            for(int k=0;k<n;k++)
            {
                ar[k]=0;
            }

            int digit=1;
            for(int small = 1;  ;small++)
            {
               // cout<<" NOW digit : " << digit <<endl;
                for(int i=1;i<=sq(small);i++)
                {
                   //  cout<<"\nvalue of x : \n"<< x <<endl;

                  //   cout<<"\t NOW digit : " << digit <<endl;
                    ar[x] = digit ;
                        // a.push_back(digit);
                   //  cout<<"\nvalue of ar["<<x<<"] "<< ": "<< ar[x-1] <<endl;

                    if( i == small)
                    {
                        digit++;
                    }

                    x++;
                   // cout<<" res now : " << ar[x-1]<<" \n ";
                }
                if(x>n)break;
            }
         cout<<" res now : " << ar[x-1]<<" \n ";

    }
}
