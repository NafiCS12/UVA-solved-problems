#include<stdio.h>
#include<conio.h>
#include<math.h>
int is_prime(int n)
{
  for (int i=2;i<=(int) sqrt(n); i++)
  {

    if (n%i == 0)
    {   return 0;
    }
  return 1;
  }
}
int main()
{
    int validate,r,count_exp=0,t1,t2,i,j,c=0,n=0;
    scanf("%d %d",&t1,&t2);
    for(i=t1; i<sqrt(t2); i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j!=0)
                c++;
        }

    }
    printf("%d\n",c);
     for(n=t1; n<t2; n++)
     {
            r = n*n + n + 41 ;
            validate = is_prime(r);
            if(validate == 1 )
            {   count_exp = count_exp + 1;
            }
     }
    printf("%d is exp \n",count_exp);

    return 0;
    //getch();
}
