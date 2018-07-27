#include<stdio.h>

int main()
{
 int t,i,k,count=0;
 scanf("%d",&t);

 for(i=1;i<=t; i++)
    {
 int R;
 int length, width, left, right, above, below;
 scanf("%d", &R);
 length = (100*R)/20.00;
 width = (6*length)/10;
 left = -45*length/100.0;
 right = 55*length/100.0;
 above = width/2.0;
 below = -1*above;
 count = count +1;
 printf("Case %d:\n",count);
 printf("%d %d\n", left, above);
 printf("%d %d\n", right, above);
 printf("%d %d\n", right, below);
 printf("%d %d\n", left, below);

 }
 return 0;
}
