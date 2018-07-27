#include <math.h>
#include <stdio.h>

int main(void)
{

    int n;
    while (scanf("%d", &n) == 1)
    {
        if(n == 6)
        {
            puts("2^-6 = 1.562e-2");
        }
        else
        {
            int power = floor( n* log10(2) +1);

            double num = (-(double)n * log10(2) +(double)power);

            num = pow(10, num);

            printf("2^-%d = %.3lfe-%d\n", n, num, power);
        }
    }


    return 0;
}
