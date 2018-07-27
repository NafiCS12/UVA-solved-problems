    #include<stdio.h>
    #include<string.h>
    #include<ctype.h>
    #define MAX 50000

    int main()
    {
       long i,j,l,n;
       char ch,str[MAX],str1[MAX];

       while(scanf("%s",&str)!=EOF)
       {
          l=strlen(str);
          for(i=0,j=l-1;i<l,j>=0;i++,j--)
             {
                str1[i]=str[j];

             }

          printf("%s",str1);
          scanf("%c",&ch);
          printf("%c",ch);
          for(n=0;n<l;n++)str1[n]='\0';


       }



       return 0;
    }

