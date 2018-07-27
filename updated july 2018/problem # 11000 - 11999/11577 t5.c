#include<stdio.h>
#include<ctype.h>
#include<string.h>
char inp[1000];
int main()
{
    int t,a;
    scanf("%d\n",&t);
    while(t--)
    {   int cnt[27]={0};
        gets(inp);
        int mx,i;
        for(i=0;inp[i];i++)
        inp[i]=tolower(inp[i]);
        for(i=0;inp[i]!='\0';i++)
        if(inp[i]>96 && inp[i]<123)
        cnt[inp[i]-97]++;

       mx =cnt[0];
       for(i=0;i<=25;i++)
       if(mx<cnt[i])
       mx = cnt[i];
       for(i=0;i<=25;i++)
       if(mx==cnt[i])
       printf("%c",i+97);
       printf("\n");
    }
    return 0;
}

