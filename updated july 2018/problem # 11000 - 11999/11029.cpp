#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int c,s[],l,n,k,mul[1001];
    double r;

    while(scanf("%d %d",&n,&k)==2)
    {//init
        for(i=0;i<1001;i++)
    {
        mul[i]= 0;

    }
    mul [1000] = 1;
       for(i=0;i<k;i++)
       {
          //
          for(j = 1000 ;j>0 ; j--)
           {
             res = mul[j] * n ;

           }
           mul = mul * n ;
       }
       l = strlen(mul);

       printf("%d\n",l);


    }
}
