#include<stdio.h>
int main()
{
     int N,i,a,b,c;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
		 scanf("%d %d %d",&a,&b,&c);
		 if((a+b<=c) || (b+c<=a) || (a+c<=b))

			{
			 printf("WRONG!!\n");
        
			}
		 else
		 {
			printf("OK\n");
		 }

     }

return 0;
}
