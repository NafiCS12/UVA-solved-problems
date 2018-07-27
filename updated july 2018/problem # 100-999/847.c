#include<stdio.h>

int main()
{
    long long int n;

    while(scanf("%lld",&n)!=EOF)
    {
        if(n%2==0)
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");

    }

    return 0;
}
