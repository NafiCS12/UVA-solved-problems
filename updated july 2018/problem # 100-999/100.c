#include<stdio.h>

int main()
{
    long int i,j,n,counter=0;
    int k;

    scanf("%ld",&n);

    for(k=i;k<=j;k++)
    {
        while( n==1)
        {
            if( n%2==0 )
            {
                n = n / 2;

                printf("%ld\n",n);

                counter += 1;
            }
            else
            {
                n=(3*n)+ 1;

                printf("%ld\n",n);

                counter += 1;
            }

        }
    }

    return 0;

}
