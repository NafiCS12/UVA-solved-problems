#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char l[26],inp[201];
    int a,i,j,mx=0,t,f[26];
    for(i=0;i<26;i++)
    {
        l[i]='a'+i;
    }

    while(scanf("%d\n",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            gets(inp);
            for(a=0;a<26;a++)
                f[a]=0;
            for(j=0;inp[j]!='\0';j++)
            {
              inp[j]=tolower(inp[j]);
                   for(a=0;a<26;a++)
                   {
                        if(inp[j]==l[a])
                            f[a]+=1;
                   }
            }
            /*end of step 2*/

            /*start of step 3*/
            for(a=0,mx=0;a<26;a++)
            {
                if(f[a]>mx)
                {
                    mx = f[a];
                }
            }
            /*end of step 3*/

            for(a=0;a<26;a++)
            {
                if(f[a]==mx)
                    printf("%c",l[a]);

            }
            printf("\n");
        }
    }
}
