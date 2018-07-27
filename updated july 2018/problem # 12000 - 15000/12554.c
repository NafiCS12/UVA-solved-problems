#include<stdio.h>
#include<string.h>
/*void msgPrint(int num)
{   int v=num-2;
    if(num%4==0)    printf("Happy");
    else if(num%4==1)   printf("birthday");
    else if(num%4==3 &&(v%3)!=0 )  printf("you");
    else if(num%4==3 &&(v%3)==0 ) printf("Rujia");
    else printf("to");
}
void process(int lok,int baki)*/
int main()
{   char msgPrint[9][5];
    char nam[101][101];
    int num,k,l,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {   scanf("%s",nam[i]);
        /*printf("%s\n\n",nam[i]);*/
    }
    /*l = (t>16)?(t/16):(16/t);*/
    if(t<=16)
    {
        l = 16/t+1;
    /*printf("%d is the value of li\n\n",l);*/
        for(j=0;j<l;j++)
        {
         for(num=0;num<t;num++)
         {
            msgPrint[9][5]=0;
            if(num%4==0)    strcpy(msgPrint[num],"Happy");
            else if(num%4==1)   strcpy(msgPrint[num],"birthday");
            else if(num%4==3 &&((num-2)%3)!=0 )  strcpy(msgPrint[num],"you");
            else if(num%4==3 &&((num-2)%3)==0 ) strcpy(msgPrint[num],"Rujia");
            else if(num%4==2)strcpy(msgPrint[num],"to");
             printf("%s: %s\n",nam[num],msgPrint[num]);
         }

        }
    }
    else
    {


    }
}
