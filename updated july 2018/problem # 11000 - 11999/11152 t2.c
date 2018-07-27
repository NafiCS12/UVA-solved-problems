#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x,rx,areat,areac,areaoc,s,v,r,R;
    scanf("%d %d %d",&a,&b,&c);

    x = (a+b+c)/2;
    areat = sqrt(x*(x-a)*(x-b)*(x-c));

    rx = areat / x;

    areac = (3.14159*rx*rx );

    R = (a*b*c)/(4*areat) ;

    areaoc = 3.14159* R * R;

    s = areaoc - areat ;
    v = areat - areac;
    r = areac ;
    printf("%.4f %.4f %.4f",s,v,r);

return 0;
}
