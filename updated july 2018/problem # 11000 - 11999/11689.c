#include<stdio.h>

int main()
{
    int i,r,N,e,f,c,T,t,p,u,a,l=0,s,x;


            scanf("%d %d %d",&e,&f,&c);
                s = e+f;
                t = s%c;
                p = s/c;
                u = p;
                while(p>=c)
                {

                    r = p%c;
                     p = p/c;
                    a = p+r;
                    l = l+a;
                 }
                 x = u+l;

            printf("%d\n",x);

return 0;
}
