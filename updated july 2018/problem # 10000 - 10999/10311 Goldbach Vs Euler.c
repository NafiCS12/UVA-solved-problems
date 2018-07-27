#include <stdio.h>
#include <math.h>
#define MAX 100000000

char  prime[MAX];

void sieve_prime()
{
    int i,j,k,l,m;


    for(i=2;i<=MAX;i++)prime[i]=1;
    k=2;
    for(m=2;m<=sqrt(MAX);m++){
      for(j=k+k;j<=MAX;j=j+k){
        prime[j]=0;
    }
    k++;
    for(;!prime[k];k++);
    }
}



int main()
{
    sieve_prime();

    unsigned long long int input,i,j,m,flag;

    while(scanf("%llu",&input)==1)
    {

         if(input%2==1)
         {
            if(prime[input-2]==0) printf("%llu is not the sum of two primes!\n",input);
            else  printf("%llu is the sum of 2 and %llu.\n",input,input-2);
          }
         else
         {

          m=0;
          flag=0;

          for(i=input/2;i<input;i++)
          {

            if(prime[(input/2)-m]==1 && prime[i]==1 && ((input/2)-m)!=i)
            {
                printf("%llu is the sum of %llu and %llu.\n",input,input-i,i);
                flag=1;
                break;
            }
            m++;
          }
          if(flag==0)printf("%llu is not the sum of two primes!\n",input);
        }


    }
    return 0;
}
