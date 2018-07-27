#include<stdio.h>
#define max 1001
#define len 2600

int fact[max][len];

void calc()
{
int i,j,k;
fact[0][0]=fact[1][0]=1;
for(i=2;i<max;i++)
{
for(j=0;j<len;j++)
{
fact[i][j]+=fact[i-1][j]*i;
if(fact[i][j]>9)
{
fact[i][j+1]+=fact[i][j]/10;
fact[i][j]%=10;
}
}
}
}

int main()
{
long res,i,j,n,m;
calc();
while(scanf("%ld %ld",&n,&m)==2)
{

for(i=len-1;i>0;i--)
if(fact[n][i]!=0)
break;
for(;i>=0;i--)
res = (fact[n][i]) % m ;
if(res != 0)

{   printf("%ld does not divide %ld!\n",m,n);

}
else if(res==0)
{
    printf("%ld does divide %ld!\n",m,n);
}

}
}
