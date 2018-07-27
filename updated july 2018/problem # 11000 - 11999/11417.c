#include<stdio.h>
#include<math.h>

int GCD(int x,int y)
{
    int r;
    if(x>y && x%y==0)
    {
        GCD(x,y) = x;
        r = GCD(x,y);
        printf("%d",r);


    }

    else if(x!=0 && x%y!=0 && y%x!=0)
    {
        GCD(x,y) = x*y;
        r = GCD(x,y);
        printf("%d",r);
    }
  else if(x<y && y%x==0)
    {
        GCD(x,y) = y;
        r = GCD(x,y);
        printf("%d",r);

    }
    return GCD(x,y);
}

int main()
{ int i,j,G=0;
scanf("%d %d",&i;&j);
scanf("%d",&N);

for(i=1;i<N;i++)

for(j=i+1;j<=N;j++)

{
    G+=GCD(i,j);
}
printf("The GCD of %d & %d is %d\n",i,j,G);
return 0;
}
