#include <stdio.h>
int main()
{
int t,j,m,n;
scanf("%d\n",&t);
for(j=1;j<=t;j++)
{
scanf("%d %d",&m,&n);
getchar();

int ans,k=0;
while(1)
{
m-=n;
k++;
if(m>0)
m+=1;
else
break;
}
if(m==0)
printf("%d\n",k);
else
printf("cannot do this\n");
}

return 0;

}
