#include<stdio.h>

int main()
{
    char ch;
    int inc,i,j,t,n,B_c,Bideshi_c,Tie_c,Aban_c;

    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        B_c=0;
        Bideshi_c =0;
        Tie_c=0;
        Aban_c=0;
        scanf("%d",&n);
        for(j=0;j<=n;j++)
        {
            scanf("%c",&ch);
            if(ch== 'B')
            {
                B_c = B_c + 1;
                //printf("Bangladeshi Counter is added and val is %d\n",B_c);
            }
            else if(ch== 'W')
            {
                Bideshi_c = Bideshi_c + 1;
                //printf("Bides Counter is added and val is %d\n",Bideshi_c);
            }
            else if(ch== 'T')
            {
                Tie_c = Tie_c + 1;
                B_c = B_c + 0;
                Bideshi_c = Bideshi_c + 0;
                //printf("tie Counter is added and val is %d\n",Tie_c);
            }
            else if(ch== 'A')
            {
                Aban_c = Aban_c + 1;
            }
            /* input ends */

        }

        if(Aban_c == n)
        {
                printf("Case %d: ABANDONED\n",i+1);
        }

        else if( (Bideshi_c == 0) && (Tie_c ==0 ) && (Aban_c ==0 ) )
        {
                printf("Case %d: BANGLAWASH\n",i+1);
        }
        else if( (B_c == 0) && (Tie_c ==0 ) && (Aban_c ==0 ) )
        {
                printf("Case %d: WHITEWASH\n",i+1);
        }

        else if(B_c > Bideshi_c)
        {
                printf("Case %d: BANGLADESH %d - %d\n",i+1,B_c,Bideshi_c);
        }

        else if(B_c < Bideshi_c)
        {
                printf("Case %d: WWW %d - %d\n",i+1,Bideshi_c,B_c);
        }

        else if ( ( B_c - Bideshi_c) == 0 )
        {
                printf("Case %d: DRAW %d  %d\n",i+1,Bideshi_c,Tie_c);
        }


    }

    return 0;
}
