#include<cstdio>
#include<iostream>
#include<numeric>
#include<utility>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<cstdlib>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<algorithm>
#include<string>
#include<clocale>

#include<functional>
#include<cstring>
using namespace std;
main()
{

    int TestCase,counter=1 ;
    double sum,blnc;  //   printf("%d $.%2lf\n",cas,sum/12);

    scanf("%d",&TestCase);
    setlocale(LC_ALL, "en_US.UTF-8");

    while(TestCase--)
    {
        for(int i=1,sum=0.0;i<13;i++)
        {
            scanf("%lf",&blnc);
            sum+=blnc;
        }
        printf("%d $%'.2lf\n",counter++,sum/12.0);
    }




}
