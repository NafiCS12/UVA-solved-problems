#include<stdio.h>

int main()
{
    int m,n,inc=1;
    while(scanf("%d %d",&m,&n)==2 && m!=0 &&n!=0 )
    {
        getchar();

        int x,y;
        char a[101][101];

        for(x=0;x<m;x++)
        {
           for(y=0;y<n;y++)
           {
                scanf("%c",&a[x][y]);
           }
           getchar();
        }

        int d,f,i,j,b[101][101]={0};

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='*')
                {
                    b[i+1][j+1]++;
                    b[i+1][j-1]++;
                    b[i-1][j+1]++;
                    b[i-1][j-1]++;
                    b[i][j-1]++;
                    b[i][j+1]++;
                    b[i-1][j]++;
                    b[i+1][j]++;
                }
            }
        }

        if(inc!=1)printf("\n");

        printf("Field #%d:\n",inc);

        for(d=0;d<m;d++)
        {
            for(f=0;f<n;f++)
            {
             if(a[d][f]=='*')
                printf("%c",a[d][f]);
             else
                printf("%d",b[d][f]);
            }
            printf("\n");
        }

        inc++;
    }

    return 0;
}
