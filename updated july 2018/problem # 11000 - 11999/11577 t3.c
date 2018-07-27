#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char inp[100];
    int t;
    scanf("%d\n",&t);
    while(t--)
    {   int cnt[27]={0},i,j,mx,k;
        gets(inp);
        /*convert all to lowercase */
        for(i=0;inp[i];i++)
            inp[i]=tolower(inp[i]);

        for(i=0;inp[i]!='\0';i++)
        {

            if(inp[i]>96 && inp[i]<123)
            {
                cnt[inp[i]-97]++;
            }
       }
      /*step 2 */
       mx = cnt[0];
       for(j=0;j<=25;j++)
       {
           if(mx<cnt[j])
           {
               mx = cnt[j];
           }
       }
       /*step 3*/
       for(k=0;k<=25;k++)
       {
           if(mx==cnt[k])
           {
               printf("%c",k+97);
           }
       }
       printf("\n");
    }
}

