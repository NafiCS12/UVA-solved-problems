#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int LCS_store[101][101];
int A[101], B[101];

/** Bottom up soln*/
int LCS_len(int sizeA,int sizeB)
{
                int m= sizeA;   int  n=sizeB;
                //init part
                for(int i=0;i<=m;i++)   { LCS_store[i][0] = 0;}
                for(int i=0;i<=n;i++)   { LCS_store[0][i] = 0;}
        //LCS  recurse part
                for(int i=1;i<=m;i++)
                {
                     for(int j=1;i<=n;j++)
                    {
                        if(A[i]==B[j])
                        {
                            LCS_store [i][j]=1+LCS_store[i-1][j-1];
                        }
                        else
                        {
                            LCS_store [i][j]=max(LCS_store[i-1][j],LCS_store[i][j-1]);
                        }
                    }
                }
                return LCS_store[sizeA][sizeB];
}
int main()
{
    int kase=1,tmp,n1,n2;

   while(1)
    {
        scanf("%d %d",&n1,&n2);
        if(n1==0 && n2==0)
        {
            break;
        }

        else
        {
            //   filling  array N1
            for(int i=0;i<n1;i++)
            {
                scanf("%d",&tmp);
                A[i]=tmp;
            }
    //   filling  array N2
            for(int i=0;i<n2;i++)
            {
                scanf("%d",&tmp);
                B[i]=tmp;
            }
            //input ends

            int ans = LCS_len(n1,n2);


                //now print ans;
                printf("Twin Towers #%d\n",kase);
                printf("Number of Tiles : %d\n\n",ans);
                kase+=1;
        }// end of else
    }//end of while

}//end of main
