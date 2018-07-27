

#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define sq(x) ((x)*(x))
using namespace std;

struct points
{
    int x;int y;
};
int Nhouse;
double distanceOfTwoPoints(points A,points B)
{

    int r1 = sq(A.x-B.x);  int r2 = sq(A.y-B.y);
    double ret = r1+r2;
    ret = sqrt(ret);
    return ret;
}
int binSearchImprovised(int key,double ar[] )
{
//make it iterative
     int low=0,high=Nhouse-1;
    while(low!=high)
    {
        int mid =(low+high+1)/2;
        if(ar[mid]>key)
        {
              high =mid-1;
        }
        else
        {
              low = mid;
        }
    }
    return low+1;
}
int main()
{
    int query,hasProtection,NoProtection;
    vector<points> v;
    points PP1,PP2; double R1,R2;
    int kases=1;
    while(1)
    {
        scanf("%d",&Nhouse);
        if(Nhouse==0 ){ break;}

        double DistFromA[Nhouse+1];
        double DistFromB[Nhouse+1];

        for(int i=0;i<Nhouse;i++)
        {
            int p,q; points tmp;
            scanf( "%d %d",&tmp.x,&tmp.y);  v.push_back(tmp);
        }

         scanf( "%d %d %d %d %d",&PP1.x,&PP1.y,&PP2.x,&PP2.y,&query);

         /* update distance of every house  from these two power plants */
         for(int i=0;i<Nhouse;i++)
         {
            DistFromA[i]=distanceOfTwoPoints(PP1,v[i]);
            DistFromB[i]=distanceOfTwoPoints(PP2,v[i]);
         }
         /* now sort these two arrays- as Binary Search will be called*/
            sort(DistFromA,DistFromA+Nhouse);        sort(DistFromB,DistFromB+Nhouse);
         /* now using binary search to check number of houses that are in danger*/

            cout<<"Case "<<kases<<":\n" ;
            kases++;
            for(int i=0;i<query;i++)
            {
                int r1,r2;
                scanf("%d %d",&r1,&r2);
                int ans1 = binSearchImprovised(r1,DistFromA);
                int ans2 = binSearchImprovised(r2,DistFromB);
                int ans = Nhouse- ans1-ans2;
                int FinalAns=0;
                ans<0?  FinalAns=0:  FinalAns=ans;
            //    cout<<"printing anser \n";
                printf("%d\n",FinalAns);

            }
    }//input's while

}
