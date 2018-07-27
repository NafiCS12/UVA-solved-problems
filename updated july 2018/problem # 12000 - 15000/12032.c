#include<stdio.h>

int main()
{
    int inc=1,j,k,i,r,m,t,n,a[101];
    scanf("%d",&t);

    for(j = 0 ; j< t ; j++)
    {
        scanf("%d",&n);
        for(i = 0 ; i< n ; i++)
        {
            scanf("%d",&a[i]);
        }

        m = a[1]-a[0];

        for(k = 1; k < n-2; k++)
        {
            r = a[k+1] - a[k];

            if( r > m ) m = r;
        }

       printf("Case %d: %d \n",inc,m);
       inc++;
    }
    return 0;
}
