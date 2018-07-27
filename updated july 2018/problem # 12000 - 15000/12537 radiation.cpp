
/** TLE for using sequential search.*/
#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<cstring>
#define sq(x) ((x)*(x))
using namespace std;

struct points
{
    int x;int y;
};

double distanceV2(int Ax,int Ay,int Bx,int By)
{
    //
    int r1 = sq(Ax-Bx);  int r2 = sq(Ay-By);
    double ret = r1+r2;
    ret = sqrt(ret);
    return ret;
}
int main()
{
    int Nhouse,query,hasProtection,NoProtection;
    vector<points> v;
    points PP1,PP2; double R1,R2;
    int kases=1;
    while(1)
    {
        scanf("%d",&Nhouse);
        if(Nhouse==0 ){ break;}

        bool inDanger[Nhouse];

        for(int i=0;i<Nhouse;i++)
        {
            int p,q; points tmp;
            scanf( "%d %d",&tmp.x,&tmp.y);  v.push_back(tmp);
        }

         scanf( "%d %d %d %d %d",&PP1.x,&PP1.y,&PP2.x,&PP2.y,&query);
         //printf("Case %d:\n",kases);
            cout<<"Case "<<kases<<":\n" ;
            kases++;
            for(int i=0;i<query;i++)
            {
                memset(inDanger,false,sizeof(inDanger));
                scanf("%lf %lf",&R1,&R2);
                NoProtection =0;hasProtection=0;
                for(int i=0;i<Nhouse;i++)
                {
                    points houseCoOrd = v[i];
                    //cout<< "inside " << houseCoOrd.x <<" "<<houseCoOrd.y<<"\n";

                   //distance of ith house from  PP1;
                    double dis1 = distanceV2(houseCoOrd.x,houseCoOrd.y,PP1.x,PP1.y);
                 //   cout<<" distance of PP1 from house # "<<i<<" is : "<< dis1<<"\n";
                    if(dis1<=R1) //this house is in risk frm PP1
                    {
                 //       cout<<"house # "<< i<<"is in danger from pp1 \n";
                        inDanger[i]=true;
                    }
                    //diistance of ith house from PP2
                    double dis2 = distanceV2(houseCoOrd.x,houseCoOrd.y,PP2.x,PP2.y);
                //     cout<<" distance of PP2 from house #"<<i<<" is : "<< dis2<<"\n";

                       if(dis2<=R2) //this house is in risk frm PP1
                       {
                //           cout<<"house # "<< i<<"is in danger from pp2 \n";
                            if(inDanger[i]==true) //this house is already in risk from PP1;
                            {
                                NoProtection +=1;
                            }
                            else //only in risj  from pp2
                            {
                                    inDanger[i]=true;
                            }
                     }
                }
                for(int i=0;i<Nhouse;i++)
                {
                    if( inDanger[i]) hasProtection+=1;
                }
                int vulnerable = Nhouse - (NoProtection +hasProtection);
                printf("%d\n",vulnerable);
            }
    }

}
