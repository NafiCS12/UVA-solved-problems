#include<stdio.h>

int main()
{

    unsigned long long int N;
    int t,i;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llu",&N);
        if ( (N%2) == 0 )
        {
            printf("%llu\n",(N/2));
        }

        else if( (N%2) ==1 )
        {
            N = N-1;
            printf("%llu\n",(N/2));
        }

    }

}
