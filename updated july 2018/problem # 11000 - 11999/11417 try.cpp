#include<stdio.h>
 int GCD(long a,long b)
         {
         while(b>0)
         {
            a = a%b;
            a = a^b;
            a = b^a;
            a = a^b;

         }
             return(a);
         }
 int main()
 {
     long a,b,N;
    while(scanf("%ld",&N) && N!=0)
     {
         long G=0;
         for(a=1;a<N;a++)
         for(b=a+1;b<=N;b++)
         {
             G+=GCD(a,b);
         }
         printf("%ld\n",G);
     }
     return(0);
 }
