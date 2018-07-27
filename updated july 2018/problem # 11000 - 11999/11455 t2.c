#include<stdio.h>

int main()
{

    int i,t;
    long int a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
/*
        if( ( (a+b)<(c+d) )||( (a+d)<(b+c) )||((a+c)<(b+d)) )
           {
               printf("banana\n");
           }

        else
            {*/
                if((a==b)&&(a==c)&&(a==d))
                {
                    printf("square\n");
                }

                else if((a==b && c==d)||(a==c)&&(b==d)||(b==c)&&(a==d) )

                {
                    printf("rectangle\n");
                }

                else if(a+b+c>d && a+c+d>b && a+d+b>c && b+c+d>a)
                {   printf("quadrangle\n");}
                else
                {
                    printf("banana\n");
                }

    }

    return 0;
}
