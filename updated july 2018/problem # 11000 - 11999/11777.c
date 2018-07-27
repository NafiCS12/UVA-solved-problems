#include<stdio.h>

int main()
{
    int T,t1,t2,f,a,i,ct1,ct2,ct3,c,r;
    while(scanf("%d",&T)==1)
  {
    for(i=1;i<=T;i++)
    {
    scanf("%d %d %d %d %d %d  %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
    if(ct1>ct2 && ct1>ct3)
     { if(ct2>ct3)
            {
                c = (ct1+ct2)/2;
            }
        else
            c = (ct1+ct3)/2;
     }
    else if(ct2>ct3 && ct2>ct1)
    {
        if(ct3>ct1)
            c = (ct3+ct2)/2;
        else if(ct1>ct3)
            c = (ct2+ct1)/2;
    }
    else if(ct3>ct1 && ct3>ct2)
    {
        if(ct2>ct1)
            c = (ct3+ct2)/2;
        else if(ct1>ct2)
            c = (ct3+ct1)/2;
    }
    r = t1+t2+f+a+c;
    if(r>=90 && r<=100)
    printf("Case %d: A\n",i);
    else if(r<90 && r>=80)
    printf("Case %d: B\n",i);
    if(r>=70 && r<80)
    printf("Case %d: C\n",i);
    if(r>=60 && r<70)
    printf("Case %d: D\n",i);
if(r<60)
    printf("Case %d: F\n",i);
    }
 }
return 0;
}
