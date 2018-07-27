#include<stdio.h>
#include<math.h>
int factorial (int x)
{
    long  long int f;
    int h;
    for(h=1;h<x;h++)
    {
        f = f*h;

        return f;
    }


}

int main()
{
    int num;
    long  long int u;

    scanf("%d",&num);
    if(num < 500)
    {
      u =  factorial(num);
      printf("%d!\n",num);
      printf("%lld\n",u);
    }
return 0;
}
