#include<stdio.h>

int main()
{
    int y,h,b;

    while(scanf("%d",&y) !=EOF)
    {
        if(y%400==0)
        {
            printf("This is l\n");
            if (y%15==0){printf("This is h\n"); }
            if (y%55==0){printf("This is b\n");}
        }
        else if(y%4==0 && y%100!=0)
        {
            printf("This is l\n");
            if(y%15==0){printf("This is h\n");}
            if(y%55==0){printf("This is b\n");}
        }

        else if (y%100==0 && y%400!=0 && y%4!=0 && y%15!=0 && y%55!=0)
            printf("ordi\n");

    }

    return 0;
}

