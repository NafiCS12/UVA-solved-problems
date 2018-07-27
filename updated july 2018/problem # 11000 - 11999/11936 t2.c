#include<stdio.h>
int main()
{
    int N,i,a,b,c;
    scanf("%d",&N);
     while(N--)
     {
             scanf("%d %d %d",&a,&b,&c);
             if(a + b > c && b + c > a && a + c > b)

            {
                printf("OK\n");

            }
             else
             {
                printf("WRONG!!\n");
             }

     }

return 0;
}
