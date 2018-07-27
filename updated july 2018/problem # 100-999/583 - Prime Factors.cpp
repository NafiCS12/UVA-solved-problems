void prime_factorization(long long x)
{
printf("\n");
long long i; /* counter */
long long c,b; /* remaining product to factor */
c = x;
        while ((c % 2) == 0) {  b = 2;
                                printf(" lld",b);
                                c = c / 2;
                             }
        i = 3;
            while (i <= (sqrt(c)+1)) {
                                        if ((c % i) == 0) {
                                            printf(" lld",i);
                                            c = c / i;
                                                          }
                                        else
                                        i = i + 2;
                                     }
        if (c>1) printf(" lld",c);

}

int main()
{
    long long int num,result;
    while(scanf("%lld",&num)&& num!=-1)
    {
        if(num>0)
           {

            prime_factorization(num);
            printf("\n");

           }
    }
return 0;
}
