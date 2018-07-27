#include<stdio.h>
#include<string.h>

int main()
{
    int T,u,i;
    char num[10];

    scanf("%d",&T);

    for(u=1;u<=T;u++)
    {
        scanf("%s",num);

        i = strlen(num);
        /*printf("%d\n",i);
        */
        if(i==3)
        {
            if(num[0]=='t'||num[2]=='o')
            {
                printf("2\n");
            }
            else if(num[0]=='o'||num[1]=='n'|| num[2]=='e')
            {
                printf("1\n");
            }
            if(num[0]=='s'||num[1]=='i'|| num[2]=='x')
            {
                printf("6\n");
            }
        }
        else if(i==5)
        {
           if(num[0]=='s'||num[1]=='e'|| num[2]=='v')
            {
                printf("7\n");
            }
            if(num[0]=='e'||num[1]=='i'|| num[2]=='g'|| num[3]=='h')
            {
                printf("8\n");
            }
            if(num[0]=='t'||num[1]=='h'|| num[2]=='r' || num[3]=='e')
            {
                printf("3\n");
            }
        }

        else if(i==4)
        {
            if(num[0]=='f'||num[1]=='o'|| num[2]=='u')
            {
                printf("4\n");
            }
            if(num[0]=='f'||num[1]=='i'|| num[2]=='e')
            {
                printf("5\n");
            }
            if(num[0]=='n'||num[1]=='i'|| num[2]=='n')
            {
                printf("9\n");
            }
        }
    }

    return 0;
}
