#include<stdio.h>
#include<math.h>
#define MAX 100000000
#define meen 100000
unsigned long long int prime[MAX];
unsigned long long int isPrime(unsigned long long int n)
{
    int i;
    unsigned long long int l =sqrt(n);
    if(n==1||n==2)  return 1;
    else if(n%2==0) return 0;
    else
    {

        for (i=3;i<=l;i=i+2)
        {

            if (n%i == 0)
            {
                return 0;
                break;
            }

        }
        return 1;
    }
}

void sieve_prime()
{
    int i,j,k,l,m;


    for(i=2;i<=MAX;i++)prime[i]=1;
    k=2;
    for(m=2;m<=sqrt(MAX);m++)
    {
      for(j=k+k;j<=MAX;j=j+k)
      {
        prime[j]=0;
      }

    k++;

        for(;!prime[k];k++);
    }
}

int main()
{
    unsigned long long int d,n;
    while(scanf("%llu",&n)==1 &&n>=0)
    {
        if(n<5) printf("%llu is not the sum of two primes!\n",n);
        else if(n&1)
        {
            unsigned long long int r=0,v=n-2;
            r = isPrime(v);
            if(r==1)
            {
                printf("%llu is the sum of 2 and %llu.\n",n,v);
            }
            else printf("%llu is not the sum of two primes!\n",n);
        }

        else
        {
            unsigned long long int idx,dx=0,e,l = ceil(sqrt(n));
            int i,j;
            for(i=0;i<=l;i++)
            {
                printf("value of n1: %llu\n",prime[i]);
                idx = n-prime[i];
                printf("VAlUE of v : %llu\n",idx);
                e = isPrime(idx);
                if(e==1){ dx=1;}
            }
          if(dx==1)  printf("%llu is the sum of %llu and %llu.\n",n,prime[i],idx);
          else if(dx==0)  printf("%llu is not the sum of two primes!\n",n);
        }
    }
}
