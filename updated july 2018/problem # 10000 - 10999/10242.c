#include<stdio.h>

int main()
{
    float px,py,x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;

    scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    px = x1+x4;
    py = y1+y4;
    x5 = px-x2;
    y5 = py-y2;

    printf("%.3f %.3f\n",x5,y5);

    return 0;
}
