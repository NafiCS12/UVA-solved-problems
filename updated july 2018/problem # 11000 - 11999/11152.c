#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    struct marks {
        int roll;
        char sub[10];
        int mark;

    } a ;

    int i ;
    for (i=0;i<3;i++)
    {


    scanf("%d  %d",&a.roll,&a.mark);
    gets(a.sub[]);

    printf("the %d roll got %d mark in %s",roll,mark,sub);
    }
    return 0;

}
