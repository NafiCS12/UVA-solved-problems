#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795

int main(){
    int r,x,A,y,xul,yul,xll,yll,xlr,ylr,xur,yur;
    float n, L, W, theta, test;

    scanf("%d",&test);
    for(A=0;A<test;A++)
        {
            scanf("%d",&r);
            L = r/0.2;
            W = (3*L)/5;
            xlr=abs((11*xll)/9);
            xul=xll;
            xur=xlr;
            xur=abs((11*xul)/9);
            yur = -ylr;
            yul = yll;

            W = sqrt((pow(-xul+xll),2)+pow((yul+yll),2));
            W = sqrt((pow(xur-xlr),2)+pow((yur+ylr),2));
            L = sqrt((pow(xur+xul),2)+pow((yur-yul),2));
            L = sqrt((pow(xlr+xll),2)+pow((yul-yll),2));

            printf("Case %d:\n");
            printf("%d %d\n",xul,yul);
            printf("%d %d\n",xur,yur);
            printf("%d %d\n",xlr,ylr);
            printf("%d %d\n",xll,yll);
        }
