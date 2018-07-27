#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,f,size,p,ani,e,sum=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&f);
        for(j=0;j<f;j++)
    {
        while(scanf("%d %d %d",&size,&ani,&e)) //!=EOF)
        {
            p = (size/ani)*e*ani ;
            sum = sum + p ;

        }
            }
            printf("%d\n",sum);

    }
return 0;
}
