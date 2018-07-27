#include<stdio.h>
#include<string.h>

int main()
{
long long int i;
int k,t,g,u;//[2000000000];
scanf("%d",&k);


   t = k/10;
 if(t<9)  //printf("%d\n",t);
   {    t = t/10;
       u = k%10;
   //printf("%d\n",u);
 }
 //printf("%d\n",t);
 //printf("%d\n",u);
 else{
 u = k%10;}
 g = u+t;
 printf("%d\n",g);
return 0;
}
