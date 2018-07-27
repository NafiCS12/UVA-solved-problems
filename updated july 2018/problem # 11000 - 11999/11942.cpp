#include<stdio.h>
int main()
{
    int  ix = 0,TestCase,c_dec,c_inc,i,a[40];
    scanf("%d",&TestCase);

    while(TestCase--)
    {
        c_dec = 0;
        c_inc = 0;
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<9;i++)
        {
            if( a[i] > a[i+1] )
            {
                c_dec = c_dec + 1;
            }

            else if( a[i] < a[i+1] )
            {
                c_inc = c_inc + 1;
            }

        }
        if(ix == 0)
        {
            printf("Lumberjacks:\n");
        }

        if( ( c_inc == 9 ) || (c_dec == 9) )
        {
            printf("Ordered\n");
        }


        else if ( ( c_inc < 9 ) || (c_dec < 9))
        {
             printf("Unordered\n");
        }
        ix++;

    }
return 0;
}
